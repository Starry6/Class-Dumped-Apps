@interface AWEHPChannelBadgeCallContext : AWEHPComponentBaseCallContext
@property (nonatomic) <AWEHPChannelBadgeModelProtocol> badgeModel;
@property (nonatomic) <AWEHPChannelBadgeModelProtocol> originBadgeModel;
@property (nonatomic) q badgeHideType;
- (id)badgeModel;
- (void)setBadgeModel:;
- (void)setOriginBadgeModel:;
- (id)originBadgeModel;
- (long long)badgeHideType;
- (void)setBadgeHideType:;
- (void).cxx_destruct;
@end
