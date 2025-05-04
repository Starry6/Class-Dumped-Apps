@interface AWEAccountForceUpgradeManager : NSObject
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidClickCloseButton:;
- (void)trackPanelShow;
- (void)trackPanelClickWithClickType:;
- (void)showUpgradeAPPPanelWithMessage:;
- (void)clickUpgradeButton;
- (void)clickCancelButton;
- (void)showUpgradeAPPPanelWithMessage:completion:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)reset;
- (id)sheet;
- (void)setSheet:;
+ (BOOL)shouldShowUpgradeAPPPanel;
+ (id)sharedInstance;
@end
