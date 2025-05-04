@interface AWEAdSummerCallingChargingCardModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailTitle;
@property (nonatomic) AWEURLModel heartImage;
@property (nonatomic) AWEURLModel heartFillingImage;
@property (nonatomic) double countdown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)heartImage;
- (id)heartFillingImage;
- (void)setHeartImage:;
- (void)setHeartFillingImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (double)countdown;
- (void)setCountdown:;
- (void)setDetailTitle:;
- (id)detailTitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
