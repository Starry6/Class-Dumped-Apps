@interface IESECGoodsSoldOutModel : MTLModel
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString msgTemplate;
@property (nonatomic) NSNumber nextTickTime;
@property (nonatomic) NSNumber nextReleaseTickTime;
@property (nonatomic) NSNumber countDownMin;
@property (nonatomic) NSNumber hasStock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMsgTemplate:;
- (void)setPromotionID:;
- (id)countDownMin;
- (id)hasStock;
- (id)msgTemplate;
- (id)nextReleaseTickTime;
- (id)nextTickTime;
- (id)promotionID;
- (void)setCountDownMin:;
- (void)setHasStock:;
- (void)setNextReleaseTickTime:;
- (void)setNextTickTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
