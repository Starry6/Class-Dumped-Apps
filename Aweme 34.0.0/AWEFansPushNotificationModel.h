@interface AWEFansPushNotificationModel : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) q unreadCount;
@property (nonatomic) q blockUrgeSetting;
- (long long)blockUrgeSetting;
- (void)setBlockUrgeSetting:;
- (long long)unreadCount;
- (id)content;
- (void)setUnreadCount:;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
