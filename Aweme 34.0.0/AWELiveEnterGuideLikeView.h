@interface AWELiveEnterGuideLikeView : UIView
@property (nonatomic) IESLiveImageView iconImageView;
@property (nonatomic) <IESLiveDiggViewFactory> diggViewFactory;
@property (nonatomic) NSTimer diggTimer;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
- (void)showDigg;
- (void)startShowDigg;
- (id)diggViewFactory;
- (void)checkIfDigg;
- (void)setDiggTimer:;
- (id)getProperDiggView:ownDigg:animationDuration:;
- (void)loadImageWithComplete:;
- (id)getimageFromLocalBundleWithIndex:;
- (void)updateDiggStartPoint:;
- (void)closeShowDigg;
- (void)setDiggViewFactory:;
- (id)diggTimer;
- (id)workQueue;
- (void)setWorkQueue:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setIconImageView:;
- (void)setupUI;
@end
