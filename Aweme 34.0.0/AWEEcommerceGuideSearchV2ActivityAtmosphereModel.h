@interface AWEEcommerceGuideSearchV2ActivityAtmosphereModel : MTLModel
@property (nonatomic) AWEEcommerceSearchCommonTagModel slogan;
@property (nonatomic) Q reminderType;
@property (nonatomic) AWEEcommerceGuideSearchV2CountDownModel countDown;
@property (nonatomic) AWEEcommerceGuideSearchV2SalesInfoModel sales;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCountDown:;
- (id)sales;
- (void)setSales:;
- (id)slogan;
- (void)setSlogan:;
- (unsigned long long)reminderType;
- (void)setReminderType:;
- (void).cxx_destruct;
- (id)countDown;
+ (id)sloganJSONTransformer;
+ (id)salesDownJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)countDownJSONTransformer;
@end
