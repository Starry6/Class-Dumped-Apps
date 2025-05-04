@interface AWELogAlt : NSObject
+ (void)logInfoFormat:;
+ (void)logInfoFormatForbid:;
+ (void)logWarnFormat:;
+ (void)logErrorFormat:;
+ (void)writeSessionLog:format:;
+ (void)logInfo:;
+ (void)logError:;
+ (void)logWarn:;
@end
