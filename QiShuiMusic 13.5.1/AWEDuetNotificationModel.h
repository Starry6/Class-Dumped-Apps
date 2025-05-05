@interface AWEDuetNotificationModel : IESIMBaseApiModel
@property (nonatomic) IESIMAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (void).cxx_destruct;
+ (id)awemeJSONTransformer;
+ (id)fromUserInfoJSONTransformer;
+ (id)toUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
