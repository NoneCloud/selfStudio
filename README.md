# selfStudio
version: selfStudio-STD-EXP GEN 0.1.0

## Application 用途
提供一些终端命令

## Usage 用法
> 标准命令格式: \<subcommand> --\<args> \<values>
### Special Arguments 特殊参数
|参数名称|用途|
|:--:|:--:|
|`--version`|获取版本|
|`--help`|获取帮助|
### info
|参数|用途|
|:--:|:--:|
|`--version`|获取版本|
|`--info`|获取相关信息|
|`--help`|获取帮助|
|`--view`|获取一个信息页面|

## Example 示例
```console
$ self --version
selfStudio-STD-EXP GEN 0.1.0
$ self info --version
selfStudio-STD-EXP GEN 0.1.0
$ self info --view
+--------------------------------------------------------------+
|                                                              |
|    ######    ######    #         ######                      |
|    #         #         #         #                           |
|    ######    ######    #         ######                      |
|         #    #         #         #                           |
|    ######    ######    ######    #                           |
|                                                              |
|    ######    ######    #    #    #####      ####     ####    |
|    #            #      #    #    #    #       #     #    #   |
|    ######       #      #    #    #    #       #     #    #   |
|         #       #      #    #    #    #       #     #    #   |
|    ######       #      ######    #####      ####     ####    |
|                                                              |
| ==========================================================   |
|                                                              |
| > selfStudio-STD-EXP GEN 0.1.0                               |
| > selfStudio Standard 0.1.0 General Experiment               |
| > A local personal tool                                      |
|                                                              |
| ==========================================================   |
|                                                              |
+--------------------------------------------------------------+
$ self --help
Special arguments:
  --help       Get help
  --version    Get version

Standard command form: <command> --<args> <values>

info:
  --help       Get help
  --info       Get information
  --version    Get version
  --view       Get information view

$