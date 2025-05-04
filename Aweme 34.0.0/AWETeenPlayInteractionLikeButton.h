@interface AWETeenPlayInteractionLikeButton : AWETeenPlayInteractionBaseButton
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL isDigging;
- (void)initializeElement;
- (BOOL)isDigging;
- (void)setIsDigging:;
- (void)p_likeActionWithAnimation:;
- (id)p_trackerParamsWithEnterMethod:;
- (void)p_likeAction;
- (void)handlePureModeDiggNotification:;
- (void)p_doAnimationWithLikeStatus:requestFailed:animated:;
- (void)p_doAnimationWithLikeStatus:requestFailed:;
- (void)dealloc;
- (id)identity;
- (void)setData:;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
@end
