@interface UICompatibilityPredictiveViewController : UIViewController
@property (nonatomic) UIView customView;
@property (nonatomic) NSArray displayedCandidates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isVisibleForInputDelegate:inputViews:;
- (BOOL)hidesExpandableButton;
- (id)displayedCandidates;
- (double)preferredHeightForTraitCollection:;
- (BOOL)_canShowWhileLocked;
- (void)setCustomView:;
- (void).cxx_destruct;
- (id)customView;
- (BOOL)requiresKeyboard;
- (void)viewDidLayoutSubviews;
@end
