@interface AWEApproveFollowRequestNotificationModel : IESIMBaseApiModel
@property (nonatomic) IESIMUserModel userInfo;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
