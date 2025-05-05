@interface LynxLogObserver : NSObject
@property (nonatomic) @? logFunction;
@property (nonatomic) q minLogLevel;
@property (nonatomic) BOOL shouldFormatMessage;
@property (nonatomic) q acceptSource;
@property (nonatomic) q acceptRuntimeId;
- (void)setLogFunction:;
- (void)setMinLogLevel:;
- (long long)acceptRuntimeId;
- (long long)acceptSource;
- (id)initWithLogFunction:minLogLevel:;
- (id)logFunction;
- (long long)minLogLevel;
- (void)setAcceptRuntimeId:;
- (void)setAcceptSource:;
- (void)setShouldFormatMessage:;
- (BOOL)shouldFormatMessage;
- (void).cxx_destruct;
@end
