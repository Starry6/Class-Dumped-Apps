@interface BDALogAdapter : NSObject
+ (void)LogWithLevel:file:function:line:tag:message:;
+ (void)flushSync;
+ (unsigned char)isConsoleLogEnabled;
+ (void)setIsConsoleLogEnabled:;
+ (void)close;
+ (void)flush;
+ (long long)currentLevel;
+ (void)setup:;
@end
