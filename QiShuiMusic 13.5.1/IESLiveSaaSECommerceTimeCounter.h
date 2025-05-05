@interface IESLiveSaaSECommerceTimeCounter : NSObject
@property (nonatomic) q counter;
@property (nonatomic) NSString identity;
@property (nonatomic) IESLiveSaaSGCDTimer timer;
@property (nonatomic) @? handler;
- (void)startCount:identity:;
- (void)stopCount;
- (void)setIdentity:;
- (id)init;
- (id)identity;
- (void)setHandler:;
- (void)setTimer:;
- (id)handler;
- (void).cxx_destruct;
- (id)timer;
- (long long)counter;
- (void)setCounter:;
+ (double)acquireAccurateActivityTime:serverTime:;
+ (id)counter;
@end
