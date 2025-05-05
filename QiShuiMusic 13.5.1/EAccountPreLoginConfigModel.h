@interface EAccountPreLoginConfigModel : NSObject
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) double connectTimeoutInterval;
@property (nonatomic) double totalTimeoutInterval;
- (double)connectTimeoutInterval;
- (id)initWithDefaultConfig;
- (void)setConnectTimeoutInterval:;
- (void)setTotalTimeoutInterval:;
- (double)totalTimeoutInterval;
- (void)setTimeoutIntervalForResource:;
- (double)timeoutIntervalForResource;
@end
