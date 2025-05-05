@interface AWEDonationNotificationModel : IESIMBaseApiModel
@property (nonatomic) IESIMAwemeModel aweme;
@property (nonatomic) IESIMUserModel fromUser;
- (id)aweme;
- (void)setAweme:;
- (void)setFromUser:;
- (void).cxx_destruct;
- (id)fromUser;
+ (id)awemeJSONTransformer;
+ (id)fromUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
