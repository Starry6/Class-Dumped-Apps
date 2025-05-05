@interface AWEFansPushNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) q unreadCount;
@property (nonatomic) q blockUrgeSetting;
- (long long)blockUrgeSetting;
- (void)setBlockUrgeSetting:;
- (id)content;
- (long long)unreadCount;
- (void)setContent:;
- (void)setUnreadCount:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
