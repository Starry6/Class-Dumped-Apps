@interface IESLiveGuideManager : NSObject
@property (nonatomic) NSMutableDictionary guideAndActions;
@property (nonatomic) UIView<IESLivePriorityGuide> displayingGuide;
@property (nonatomic) q retryCount;
- (BOOL)canFire;
- (id)displayingGuide;
- (id)guideAndActions;
- (id)bubbleGuideWithPriority:;
- (void)clearActionWithView:;
- (void)guideView:applayDisPlayInView:completion:;
- (void)processInComingView:containerView:delay:completion:;
- (BOOL)readyToShowNextGuide:;
- (void)resetFire;
- (void)setDisplayingGuide:;
- (void)setGuideAndActions:;
- (id)init;
- (void)setRetryCount:;
- (long long)retryCount;
- (void).cxx_destruct;
- (void)fire;
+ (id)bubbleGuide;
+ (id)bubbleGuideWithPriority:;
+ (id)showTextPieces:backgroundImage:arrowImage:inView:atBottomOf:delay:duration:priority:didShow:;
+ (id)showTextPieces:backgroundImage:arrowImage:inView:atTopOf:delay:duration:priority:didShow:;
+ (id)showTip:inView:atBottomOf:delay:duration:priority:didShow:;
+ (id)showTip:inView:atBottomOf:delay:duration:remakeConstraints:appendContentConstraints:priority:didShow:;
+ (id)showTip:inView:atTopOf:delay:duration:priority:didShow:;
+ (id)sharedInstance;
@end
