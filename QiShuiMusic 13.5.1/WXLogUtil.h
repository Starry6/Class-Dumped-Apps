@interface WXLogUtil : NSObject
@property (nonatomic) @? logBlock;
@property (nonatomic) q logLevel;
@property (nonatomic) <WXApiLogDelegate> logDelegate;
- (void)printLog:level:;
- (void)setLogDelegate:;
- (void)configLogBlock:level:;
- (void)configLogDelegate:level:;
- (id)logDelegate;
- (void)removeLog;
- (void)setLogLevel:;
- (long long)logLevel;
- (void).cxx_destruct;
- (id)logBlock;
- (void)setLogBlock:;
+ (id)sharedInstance;
@end
