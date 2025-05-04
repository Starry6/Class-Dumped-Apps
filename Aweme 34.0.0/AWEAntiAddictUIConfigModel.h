@interface AWEAntiAddictUIConfigModel : MTLModel
@property (nonatomic) AWEAntiAddictDailyAlertConfigWrapper dailyAlertUIConfig;
@property (nonatomic) AWEAntiAddictNormalMaskConfigModel normalMaskConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)normalMaskConfig;
- (id)dailyAlertUIConfig;
- (void).cxx_destruct;
+ (id)dailyAlertUIConfigJSONTransformer;
+ (id)normalMaskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
