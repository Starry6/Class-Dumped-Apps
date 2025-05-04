@interface AWEMiniLunaPlaylistStats : AWEBaseApiModel
@property (nonatomic) q countCollected;
@property (nonatomic) q countShared;
@property (nonatomic) q countComment;
@property (nonatomic) q countOnlySubscriberPlayable;
- (long long)countCollected;
- (void)setCountCollected:;
- (long long)countShared;
- (void)setCountShared:;
- (long long)countComment;
- (void)setCountComment:;
- (long long)countOnlySubscriberPlayable;
- (void)setCountOnlySubscriberPlayable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
