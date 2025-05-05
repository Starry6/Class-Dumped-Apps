@interface AWELogAlt : NSObject
+ (void)logErrorFormat:;
+ (void)logInfoFormat:;
+ (void)logWarnFormat:;
+ (void)writeSessionLog:format:;
+ (void)logError:;
+ (void)logInfo:;
+ (void)logWarn:;
@end
