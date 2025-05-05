@interface UICandidateViewController : UIViewController
@property (nonatomic) UIView candidateView;
@property (nonatomic) NSArray displayedCandidates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)overrideUserInterfaceStyle;
- (BOOL)isVisibleForInputDelegate:inputViews:;
- (BOOL)hidesExpandableButton;
- (id)displayedCandidates;
- (double)preferredHeightForTraitCollection:;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)loadView;
- (id)candidateView;
- (BOOL)requiresKeyboard;
- (void)viewDidLayoutSubviews;
- (void)setCandidateView:;
+ (double)preferredCandidateBarHeightForTraitCollection:;
@end
