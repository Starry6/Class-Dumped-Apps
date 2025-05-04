@interface AWEFollowStateReadResponse : AWESocialRelationResponse
@property (nonatomic) q followStatus;
@property (nonatomic) q mutualFollowType;
- (long long)followStatus;
- (void)setFollowStatus:;
- (long long)mutualFollowType;
- (void)setMutualFollowType:;
@end
