@interface AWEMessageReachBadgeCallbackContext : AWEMessageReachComponentCallbackContext
@property (nonatomic) q result;
@property (nonatomic) q hideType;
@property (nonatomic) q downgradedType;
@property (nonatomic) AWEFeedChannelTopBarBadgeModel badgeModel;
- (id)badgeModel;
- (long long)downgradedType;
- (void)setDowngradedType:;
- (void)setBadgeModel:;
- (long long)hideType;
- (void)setHideType:;
- (void)setResult:;
- (void).cxx_destruct;
- (long long)result;
@end
