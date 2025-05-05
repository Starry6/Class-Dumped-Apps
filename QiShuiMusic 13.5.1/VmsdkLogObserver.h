@interface VmsdkLogObserver : NSObject
@property (nonatomic) @? logFunction;
@property (nonatomic) q minLogLevel;
- (void)setLogFunction:;
- (void)setMinLogLevel:;
- (id)initWithLogFunction:minLogLevel:;
- (id)logFunction;
- (long long)minLogLevel;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
