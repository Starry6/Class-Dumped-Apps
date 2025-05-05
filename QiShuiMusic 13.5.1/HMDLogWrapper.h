@interface HMDLogWrapper : NSObject
+ (void)alogClose;
+ (void)alogFlush;
+ (void)alogFlushSync;
+ (id)alogGetFilPathsFrom:to:;
+ (void)alogOpenDefault:namePrefix:;
+ (void)alogOpenWithDir:namePrefix:maxSize:outdate:isCrypt:;
+ (void)alogRemoveFileAt:;
+ (void)alogSetConsoleLogOpen:;
+ (void)alogSetTagBlocklist:;
+ (void)debugALog:tag:fileName:funcName:line:;
+ (void)errorALog:tag:fileName:funcName:line:;
+ (void)fatalALog:tag:fileName:funcName:line:;
+ (void)infoALog:tag:fileName:funcName:line:;
+ (void)setALogEnabled;
+ (void)setALogWithFileName:funcName:tag:line:level:format:;
+ (void)setAlogSetLogLevel:;
+ (void)warnALog:tag:fileName:funcName:line:;
+ (id)defaultPath;
@end
