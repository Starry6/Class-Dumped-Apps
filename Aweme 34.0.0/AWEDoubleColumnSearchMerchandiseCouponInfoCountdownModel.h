@interface AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel : MTLModel
@property (nonatomic) double endTime;
@property (nonatomic) NSString countdownTextColor;
@property (nonatomic) NSString countdownBackgroundColor;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel headText;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel tailText;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel countdownEndText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headText;
- (id)tailText;
- (id)countdownBackgroundColor;
- (id)countdownEndText;
- (void)setCountdownBackgroundColor:;
- (void)setHeadText:;
- (void)setTailText:;
- (void)setCountdownEndText:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)countdownTextColor;
- (void)setCountdownTextColor:;
+ (id)headTextJSONTransformer;
+ (id)tailTextJSONTransformer;
+ (id)countdownEndTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
