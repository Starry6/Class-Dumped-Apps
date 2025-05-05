@interface IESLiveBattleDrawPropOperation : NSObject
@property (nonatomic) IESLiveBattleDrawPropNode animationNode;
@property (nonatomic) IESLiveAnimatedImageView animationPlayer;
@property (nonatomic) @? finishedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationPlayer;
- (id)animationNode;
- (id)executeCoinMoveAnimationFromStart:toTarget:;
- (void)executeDropAnimation;
- (id)executeGiftIconScaleAnimation;
- (id)initWithNode:DIContext:;
- (void)playTaskCompletedWithReason:;
- (void)setAnimationNode:;
- (void)setAnimationPlayer:;
- (void)startTask;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (void)setFinishedBlock:;
- (void).cxx_destruct;
- (id)finishedBlock;
- (void)cancelTask;
@end
