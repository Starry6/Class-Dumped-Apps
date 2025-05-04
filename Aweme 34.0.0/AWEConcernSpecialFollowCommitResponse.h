@interface AWEConcernSpecialFollowCommitResponse : AWEBaseApiModel
@property (nonatomic) q leftCount;
@property (nonatomic) q specialFollowStatus;
- (void)setLeftCount:;
- (long long)leftCount;
- (long long)specialFollowStatus;
- (void)setSpecialFollowStatus:;
+ (id)JSONKeyPathsByPropertyKey;
@end
