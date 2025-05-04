@interface AWEAntiAddictDailyAlertConfigWrapper : MTLModel
@property (nonatomic) q type;
@property (nonatomic) AWEAntiAddictDailyAlertConfigModel dayConfig;
@property (nonatomic) AWEAntiAddictDailyAlertConfigModel nightConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dayConfig;
- (id)nightConfig;
- (long long)type;
- (void).cxx_destruct;
+ (id)dayConfigJSONTransformer;
+ (id)nightConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
