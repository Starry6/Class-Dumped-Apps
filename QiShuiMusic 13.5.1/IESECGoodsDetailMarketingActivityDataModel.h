@interface IESECGoodsDetailMarketingActivityDataModel : MTLModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) IESECGoodsDetailActivityTimeModel activityTime;
@property (nonatomic) IESECImageModel backgroundImageModel;
@property (nonatomic) IESECImageModel iconImageModel;
@property (nonatomic) IESECTextElement activityHintText;
@property (nonatomic) IESECTextElement priceDesc;
@property (nonatomic) IESECPriceElement priceElement;
@property (nonatomic) IESECPriceElement marketPriceElement;
@property (nonatomic) IESECPriceElement discountPriceElement;
@property (nonatomic) IESECTextElement saleElement;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString rulePageURL;
@property (nonatomic) q joined;
@property (nonatomic) q groupSize;
@property (nonatomic) q percent;
@property (nonatomic) q skuMinPrice;
@property (nonatomic) q skuMaxPrice;
@property (nonatomic) NSArray groupBuyerList;
@property (nonatomic) IESECPriceElement depositPrice;
@property (nonatomic) NSNumber auctionID;
@property (nonatomic) q auctionStatus;
@property (nonatomic) IESECSubsidyActivityModel subsidy;
@property (nonatomic) q activityState;
@property (nonatomic) IESECGoodsActivityCountdown countdown;
@property (nonatomic) NSString preActivityHintString;
@property (nonatomic) IESECGoodsDetailBaseInfoSkuDataModel skuInfo;
@property (nonatomic) BOOL isGroupBuying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRulePageURL:;
- (void)setSkuMaxPrice:;
- (id)subsidy;
- (void)setSaleElement:;
- (void)setSkuMinPrice:;
- (id)skuInfo;
- (id)activityHintText;
- (id)activityTime;
- (id)auctionID;
- (long long)auctionStatus;
- (id)backgroundImageModel;
- (id)depositPrice;
- (id)discountPriceElement;
- (id)groupBuyerList;
- (long long)groupSize;
- (id)iconImageModel;
- (BOOL)isGroupBuying;
- (id)marketPriceElement;
- (id)preActivityHintString;
- (id)priceDesc;
- (id)priceElement;
- (id)rulePageURL;
- (id)saleElement;
- (void)setActivityHintText:;
- (void)setActivityTime:;
- (void)setAuctionID:;
- (void)setAuctionStatus:;
- (void)setBackgroundImageModel:;
- (void)setDepositPrice:;
- (void)setDiscountPriceElement:;
- (void)setGroupBuyerList:;
- (void)setGroupSize:;
- (void)setIconImageModel:;
- (void)setIsGroupBuying:;
- (void)setMarketPriceElement:;
- (void)setPreActivityHintString:;
- (void)setPriceDesc:;
- (void)setPriceElement:;
- (void)setSkuInfo:;
- (void)setSubsidy:;
- (long long)skuMaxPrice;
- (long long)skuMinPrice;
- (void)setGroupID:;
- (id)groupID;
- (long long)activityState;
- (void).cxx_destruct;
- (void)setActivityState:;
- (id)countdown;
- (void)setCountdown:;
- (id)activityID;
- (void)setActivityID:;
- (long long)percent;
- (long long)joined;
- (void)setJoined:;
- (void)setPercent:;
+ (id)groupBuyerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
