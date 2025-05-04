@interface AWEECOMIMQueueCountModel : NSObject
@property (nonatomic) q queuedCount;
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString contentString;
@property (nonatomic) NSString countTipString;
@property (nonatomic) q thresHoldCount;
@property (nonatomic) q state;
- (id)shopId;
- (void)setShopId:;
- (long long)queuedCount;
- (void)setQueuedCount:;
- (id)countTipString;
- (void)setCountTipString:;
- (long long)thresHoldCount;
- (void)setThresHoldCount:;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (id)contentString;
- (void)setContentString:;
+ (id)queuedCountModelWithQeuedCount:threshold:;
@end
