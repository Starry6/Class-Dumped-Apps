@interface AWETrackerLogManager : NSObject
@property (nonatomic) @? logger;
- (id)logger;
- (id)init;
- (void)setLogger:;
- (void).cxx_destruct;
+ (void)logWithLevel:subModule:info:;
+ (void)logWithInfo:arguments:;
+ (void)logWithLevel:info:arguments:;
+ (void)logWithLevel:subModule:info:arguments:;
+ (void)injectLogger:;
+ (void)logWithInfo:;
+ (void)logWithLevel:info:;
+ (id)sharedInstance;
@end
