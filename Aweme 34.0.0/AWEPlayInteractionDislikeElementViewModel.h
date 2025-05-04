@interface AWEPlayInteractionDislikeElementViewModel : AWEPlayInteractionBaseElementViewModel
@property (nonatomic) BOOL disableDislikeAction;
@property (nonatomic) UIViewController viewController;
- (void)trackClickClose;
- (void)onDislikeButtonClicked:;
- (void)didCancelDislike:;
- (BOOL)disableDislikeAction;
- (void)setDisableDislikeAction:;
- (void)trackClickDislike;
- (void)trackClickCancel;
- (void)onCancelButtonClicked:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
@end
