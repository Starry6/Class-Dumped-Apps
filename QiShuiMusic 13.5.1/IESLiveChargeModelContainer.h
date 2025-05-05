@interface IESLiveChargeModelContainer : IESLiveDynamicMTLModel
@property (nonatomic) NSArray charges;
@property (nonatomic) IESLiveChargeBannerModel topBanner;
@property (nonatomic) NSNumber defaultDiamondID;
@property (nonatomic) NSString bannerLynxUrl;
@property (nonatomic) NSNumber recommendedDiamondID;
@property (nonatomic) BOOL isFirstCharge;
@property (nonatomic) q cacheStrategy;
@property (nonatomic) BOOL needManuallyAgreement;
@property (nonatomic) NSDictionary diamondToExtra;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diamondToExtra;
- (BOOL)needManuallyAgreement;
- (id)recommendedDiamondID;
- (void)setDiamondToExtra:;
- (void)setNeedManuallyAgreement:;
- (void)setRecommendedDiamondID:;
- (void).cxx_destruct;
+ (id)chargesJSONTransformer;
+ (id)topBannerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
