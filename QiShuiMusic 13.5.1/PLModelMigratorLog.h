@interface PLModelMigratorLog : NSObject
- (id)init;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithLogFileURL:logRotate:;
- (void)logWithMessage:fromCodeLocation:type:;
+ (id)new;
+ (id)setup;
+ (id)openLoggerAtURL:logRotate:;
@end
