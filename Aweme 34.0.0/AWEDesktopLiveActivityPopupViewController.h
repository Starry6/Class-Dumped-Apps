@interface AWEDesktopLiveActivityPopupViewController : UIViewController
@property (nonatomic) AWEDesktopSystemPopupGuideView guideView;
@property (nonatomic) AWEDesktopLiveActivityPopupViewModel viewModel;
@property (nonatomic) DUXContentSheet basicSheet;
@property (nonatomic) @? dismissCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidDismiss:;
- (void)setDismissCompletion:;
- (id)initWithGuideViewModel:;
- (void)setBasicSheet:;
- (id)basicSheet;
- (void)setupGuideView;
- (void)setupGuideViewBottomImage;
- (void)desktopSystemPopupGuideView:leftButtonClick:;
- (void)desktopSystemPopupGuideView:rightButtonClick:;
- (void)desktopSystemPopupGuideView:closeButtonClick:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)dismissCompletion;
- (id)guideView;
- (void)setGuideView:;
@end
