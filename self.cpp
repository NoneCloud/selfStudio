#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

struct Command{
    std::string name;
    std::vector<std::pair<std::string, std::string>> args;
    Command(std::string name, std::vector<std::pair<std::string, std::string>> args = {}){
        this->name = name;
        this->args = args;
    }
};

// 细节处理
namespace Detail{
    // ERROR_QUIT 输出错误信息
    void ERROR_QUIT(std::string info, bool forceExit=false, int exitCode = 2){
        std::cerr << "\033[31m[Error] " << info << "\033[0m\n";
        if (forceExit) std::exit(exitCode);
    }

}

// 信息
namespace Info{
    const std::string NAME = "self-STD-EXP";    // 名称 
    const std::string VERSION = "self-STD-EXP WIN 0.1.0";    // 版本信息 
    const std::string DETAIL = "self Standard 0.1.0 Experiment for Windows";    // 详情 
    const std::string THEME[4]= {"\033[34m", "\033[44m", "\033[94m", "\033[104m"};    // 主题色 blue : Standard FGC, Standard BGC, Light FGC, Light BGC
    const std::pair<std::string, std::map<std::string ,std::string>> HELPS[] = {    // 帮助 
        {
            "Special Args: ",
            {
                {"--version  ", "  Get version"},
                {"--info     ", "  Get information"},
                {"--help     ", "  Get help"},
                {"--view     ", "  Get information view"}
            }
        },
        {
            "Standard Command Form: " + THEME[2] + "<command>" + THEME[0] + " --<args> <values>\033[0m", 
            {}
        },
        {
            "info: ",
            {
                {"--version  ", "  Get version"},
                {"--info     ", "  Get information"},
                {"--help     ", "  Get help"},
                {"--view     ", "  Get information view"}
            } 
        }
    };
    void VIEW(){
        const std::string view = 
            "\033[34m+--------------------------------------------------------------+\033[0m\n"
            "|                                                              |\n"
            "|    ######    ######    #         ######                      |\n"
            "|    #         #         #         #                           |\n"
            "|    ######    ######    #         ######                      |\n"
            "|         #    #         #         #                           |\n"
            "|    ######    ######    ######    #                           |\n"
            "|                                                              |\n"
            "|    ######    ######    #    #    #####      ####     ####    |\n"
            "|    #            #      #    #    #    #       #     #    #   |\n"
            "|    ######       #      #    #    #    #       #     #    #   |\n"
            "|         #       #      #    #    #    #       #     #    #   |\n"
            "|    ######       #      ######    #####      ####     ####    |\n"
            "|                                                              |\n"
            "| ==========================================================   |\n"
            "|                                                              |\n"
            "| > selfSuidio-STD-EXP WIN 0.1.0                               |\n"
            "| > selfStudio Standard 0.1.0 for Windows Experiment           |\n"
            "| > A local personal tool                                      |\n"
            "|                                                              |\n"
            "| ==========================================================   |\n"
            "|                                                              |\n"
            "\033[34m+--------------------------------------------------------------+\033[0m"
        ;
        for (char c : view){
            if (c == '#') std::cout << THEME[2] << c << "\033[0m";
            else if (c == '|') std::cout << THEME[0] << c << "\033[0m";
            else if (c == '>') std::cout << THEME[2] << c;
            else if (c == '=') std::cout << THEME[0] << c;
            else std::cout << c;
        }
    }
}
    

int main(int argc, char* argv[]){
    std::vector<std::string> args(argv, argv+argc);

    if (args.size() < 2){
        Detail::ERROR_QUIT("Wrong number of arguments");
        return 2;
    }
    if (args[1] == "--version"){
        std::cout << Info::VERSION;

    }else if (args[1] == "--info"){
        std::cout << Info::NAME << std::endl;
        std::cout << Info::VERSION << std::endl;
        std::cout << Info::DETAIL << std::endl;
    
    }else if (args[1] == "--help"){
        for (auto [key, val]:Info::HELPS){
            std::cout << key << std::endl;
            for (auto [name, help]:val){
                std::cout << "  " << name << help << std::endl;
            }
            std::cout << std::endl;
        }
    }else if(args[1] == "--view"){
        Info::VIEW();
    }else if(args[1] == "info"){
        if (args.size() < 3){
            Detail::ERROR_QUIT("Wrong number of arguments");
            return 2;
        }
        if (args[2] == "--version"){
            std::cout << Info::VERSION;

        }else if (args[2] == "--info"){
            std::cout << Info::NAME << std::endl;
            std::cout << Info::VERSION << std::endl;
            std::cout << Info::DETAIL << std::endl;
        
        }else if (args[2] == "--help"){
            for (auto [key, val]:Info::HELPS){
                std::cout << key << std::endl;
                for (auto [name, help]:val){
                    std::cout << "  " << name << help << std::endl;
                }
                std::cout << std::endl;
            }
        }else if(args[2] == "--view"){
            Info::VIEW();
        }else{
            Detail::ERROR_QUIT("Wrong command: " + args[1] + " (use 'self --help' to get help)");
            return 2;
        }
    }else{
        Detail::ERROR_QUIT("Wrong command: " + args[1] + " (use 'self --help' to get help)");
        return 2;
    }
    return 0;
}