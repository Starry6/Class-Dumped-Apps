@interface ABURewardedVideoModel : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString rewardName;
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL allowPlayAgain;
- (BOOL)allowPlayAgain;
- (long long)rewardAmount;
- (id)rewardName;
- (void)setAllowPlayAgain:;
- (void)setExtra:;
- (void)setRewardAmount:;
- (void)setRewardName:;
- (id)extra;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (BOOL)isEqual:;
- (id)toString;
@end
