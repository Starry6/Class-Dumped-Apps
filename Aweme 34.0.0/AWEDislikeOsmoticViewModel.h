@interface AWEDislikeOsmoticViewModel : AWEPlayInteractionDislikeElementViewModel
@property (nonatomic) BOOL disableDislikeAction;
- (void)onDislikeButtonClicked:;
- (BOOL)disableDislikeAction;
- (void)setDisableDislikeAction:;
- (void)onOptimizedDislikeButtonClicked:extraInfo:;
- (void)didClickWithdrawWithParams:;
@end
