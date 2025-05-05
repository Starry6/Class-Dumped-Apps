@interface TSPKStatisticConfig : NSObject
@property (nonatomic) q factTimeout;
@property (nonatomic) q factQueueSize;
@property (nonatomic) NSArray factParameters;
- (void)setFactTimeout:;
- (id)factParameters;
- (long long)factQueueSize;
- (long long)factTimeout;
- (void)setFactParameters:;
- (void)setFactQueueSize:;
- (void).cxx_destruct;
@end
