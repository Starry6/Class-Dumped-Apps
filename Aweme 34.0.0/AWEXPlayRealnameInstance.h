@interface AWEXPlayRealnameInstance : NSObject
@property (nonatomic) AWEXPlayOpenServiceModel model;
@property (nonatomic) <AWEBatManAuthServiceTrakerDelegate> trackerDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackerDelegate:;
- (id)trackerDelegate;
- (void)onCloseButtonClickedWithCheck:;
- (void)onConfirmButtonClickedWithCheck:;
- (void)onRetainDialogConfirmClicked;
- (void)onRetainDialogExitClicked;
- (void)requestInterconnectionRealnameWithModel:completion:;
- (void)p_startRealnameInterconnectionAuth:;
- (void)p_callNewRealnameLocalAuthViewControllerWithCallback:;
- (void)p_callRealnameInterconnectionWithCallback:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
