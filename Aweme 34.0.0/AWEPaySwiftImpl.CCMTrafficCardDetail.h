@interface AWEPaySwiftImpl.CCMTrafficCardDetail : MTLModel
@property (nonatomic) NSString trafficID;
@property (nonatomic) NSString trafficName;
@property (nonatomic) NSString userOpenStatus;
@property (nonatomic) NSString openAction;
@property (nonatomic) NSString openScheme;
@property (nonatomic) NSString ccmCardID;
@property (nonatomic) NSDictionary agreementDic;
@property (nonatomic) AWEYAPTransportTrafficAgreement agreement;
@property (nonatomic) NSString trafficBackImg;
@property (nonatomic) NSArray serviceList;
@property (nonatomic) NSString trafficLogo;
@property (nonatomic) NSDictionary lynxCards;
@property (nonatomic) _TtC15AWEPaySwiftImpl25CCMEntryPagePromotionInfo promotionInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl19CCMEntrySumDiscount sumDiscountInfo;
@property (nonatomic) NSString bannerReminderContent;
@property (nonatomic) _TtC15AWEPaySwiftImpl22CCMRetainPromotionInfo retainPromotionInfo;
- (id)trafficID;
- (void)setTrafficID:;
- (id)trafficName;
- (void)setTrafficName:;
- (id)userOpenStatus;
- (void)setUserOpenStatus:;
- (id)openAction;
- (void)setOpenAction:;
- (id)openScheme;
- (void)setOpenScheme:;
- (id)ccmCardID;
- (void)setCcmCardID:;
- (id)agreementDic;
- (void)setAgreementDic:;
- (id)agreement;
- (void)setAgreement:;
- (id)trafficBackImg;
- (void)setTrafficBackImg:;
- (void)setTrafficLogo:;
- (id)lynxCards;
- (void)setLynxCards:;
- (id)promotionInfo;
- (void)setPromotionInfo:;
- (id)sumDiscountInfo;
- (void)setSumDiscountInfo:;
- (id)bannerReminderContent;
- (void)setBannerReminderContent:;
- (id)retainPromotionInfo;
- (void)setRetainPromotionInfo:;
- (id)trafficLogo;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setServiceList:;
- (id)serviceList;
+ (id)serviceListJSONTransformer;
+ (id)lynxCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
