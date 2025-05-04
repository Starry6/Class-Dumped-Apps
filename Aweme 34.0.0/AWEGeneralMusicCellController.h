@interface AWEGeneralMusicCellController : UIViewController
@property (nonatomic) AWESearchMusicsSingleCellController musicSingleViewController;
@property (nonatomic) <AWEModernFeedCellContext> context;
@property (nonatomic) # cardClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didStartShowing;
- (void)didResignActiveForReason:;
- (void)showFeedbackGuideView;
- (void)forceBecomeActive;
- (id)musicSingleViewController;
- (void)cancelAudioPlay;
- (void)setMusicSingleViewController:;
- (void)didMoveToParentViewController:;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (void)updateWithModel:;
+ (double)modernFeedCellPreferedHeightForModel:width:;
+ (void)__awe__codeRunnerRun___LINE__;
+ (BOOL)hasMoreContent:;
@end
