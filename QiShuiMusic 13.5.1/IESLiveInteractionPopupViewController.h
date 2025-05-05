@interface IESLiveInteractionPopupViewController : HTSLivePopupBaseViewController
@property (nonatomic) @? onPopUpClose;
@property (nonatomic) @? onPopUpOpen;
- (void)setOnPopUpOpen:;
- (id)onPopUpClose;
- (id)onPopUpOpen;
- (void)onSetupNavBar:;
- (void)setOnPopUpClose:;
- (void)dismiss;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
