@interface AWEUserRecommendButton : AFDButton
@property (nonatomic) BOOL isAttentionState;
@property (nonatomic) AWEUserRecommendButtonColorModel colorModel;
- (void)setIsAttentionState:;
- (id)colorModel;
- (void)setColorModel:;
- (BOOL)isAttentionState;
- (void)updateWithFollowStatus:followerStatus:;
- (void)p_updateColors;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:scene:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
