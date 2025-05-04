@interface AWETeenGeneralLikeButton : AWETeenGeneralBaseActionButton
@property (nonatomic) LOTAnimationView likeAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlayingAnim;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)setLikeAnimationView:;
- (id)likeAnimationView;
- (void)btnClick;
- (void)p_onAwemeDiggNotification:;
- (void)configWithModel:extra:;
- (void)playLikeAnimationWithLikeStatus:requestFailed:;
- (BOOL)isPlayingAnim;
- (void)setIsPlayingAnim:;
- (id)p_lottieAnimationNameWithStatus:;
- (void)p_updateDiggCount;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
