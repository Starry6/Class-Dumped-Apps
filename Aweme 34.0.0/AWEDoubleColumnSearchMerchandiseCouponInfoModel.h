@interface AWEDoubleColumnSearchMerchandiseCouponInfoModel : MTLModel
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel countdown;
@property (nonatomic) NSString background;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon headIcon;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel headText;
@property (nonatomic) NSArray contentText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headIcon;
- (void)setHeadIcon:;
- (id)headText;
- (void)setHeadText:;
- (id)background;
- (void)setBackground:;
- (void).cxx_destruct;
- (id)countdown;
- (void)setCountdown:;
- (void)setContentText:;
- (id)contentText;
+ (id)countdownJSONTransformer;
+ (id)headIconJSONTransformer;
+ (id)contentTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
