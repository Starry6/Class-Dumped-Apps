@interface AWEAntiAddictLogUtil : NSObject
+ (BOOL)enableLog;
+ (void)logInfo:action:supplement:extraInfoFormat:;
+ (void)logWarn:action:supplement:extraInfoFormat:;
+ (id)p_formattedLogInClass:action:supplement:extraInfo:;
+ (void)logError:action:supplement:extraInfoFormat:;
@end
