@interface IESLiveInteractEmojiFromCommand : IESLiveInteractEmojiBaseCommand
@property (nonatomic) @? transitionAnimation;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> effectView;
@property (nonatomic) IESLiveInteractGiftAnimationInfo animationInfo;
@property (nonatomic) NSMutableSet occupiedUsers;
- (void)batchDispatch:effect:to:;
- (void)dispatch:from:to:;
- (id)occupiedUsers;
- (void)setOccupiedUsers:;
- (void)setTransitionAnimation:;
- (void)transitionAnimation:effect:completed:;
- (void)cancelTask:;
- (id)effectView;
- (void).cxx_destruct;
- (void)setEffectView:;
- (void)removeAnimation:;
- (id)transitionAnimation;
- (id)animationInfo;
- (void)setAnimationInfo:;
@end
