@interface AWEHPBadgeInfo : AWEHPBaseComponentInfo
@property (nonatomic) Q badgeType;
@property (nonatomic) NSString badgeText;
@property (nonatomic) q badgeNumber;
@property (nonatomic) q downgradedType;
@property (nonatomic) AWEHPChannelBadgeCallContext context;
- (long long)downgradedType;
- (void)setDowngradedType:;
- (long long)badgeNumber;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setBadgeNumber:;
- (id)copyWithZone:;
- (unsigned long long)badgeType;
- (id)badgeText;
- (void)setBadgeText:;
- (void)setBadgeType:;
@end
