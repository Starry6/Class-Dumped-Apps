@interface AWETeenGeneralCollectButton : AWETeenGeneralBaseActionButton
@property (nonatomic) LOTAnimationView collectAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlayingAnim;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)btnClick;
- (void)setCollectAnimationView:;
- (id)collectAnimationView;
- (void)didFinishCollectWithItemID:actionType:collectCount:;
- (void)configWithModel:extra:;
- (void)p_updateCollectCount;
- (void)p_playCollectAnimationWithCollectStatus:requestFailed:;
- (BOOL)isPlayingAnim;
- (void)setIsPlayingAnim:;
- (id)p_lottieAnimationNameWithStatus:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
