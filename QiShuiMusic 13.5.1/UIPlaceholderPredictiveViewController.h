@interface UIPlaceholderPredictiveViewController : UIViewController
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
- (BOOL)_isVisibleForAutocorrectionType:;
- (BOOL)requiresKeyboard;
@end
