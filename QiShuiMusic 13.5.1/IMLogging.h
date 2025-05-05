@interface IMLogging : NSObject
+ (id)dateFormatter;
+ (id)timeFormatter;
+ (BOOL)loggingEnabledForLevel:;
+ (id)stringForDate;
+ (void)logAtLevel:type:category:format:;
+ (void)logAtLevel:type:category:insertProcessInfo:format:;
+ (void)logAtLevel:type:category:format:arguments:;
+ (void)logAtLevel:type:category:insertProcessInfo:simpleLogString:format:arguments:time:;
+ (void)logAtLevel:type:category:insertProcessInfo:format:arguments:;
+ (void)logAtLevel:type:category:insertProcessInfo:simpleLogString:time:;
+ (void)logAtLevel:type:category:insertProcessInfo:simpleLogString:;
+ (id)logFileDirectory;
+ (void)logString:toFolder:toFileNamed:;
+ (void)enableConsoleLoggingForLevel:;
@end
