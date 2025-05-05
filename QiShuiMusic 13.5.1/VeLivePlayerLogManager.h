@interface VeLivePlayerLogManager : NSObject
+ (void)initVolcLog;
+ (void)setLegacyAPILogLevel:;
+ (void)setLogConfiguration:;
+ (void)writeLogLevel:tag:fileName:function:line:format:;
+ (void)writeLogLevel:tag:fileName:line:format:;
+ (void)writeLogLevel:tag:fileName:line:log:;
+ (void)writeLogLevel:tag:log:;
+ (void)setLogLevel:;
@end
