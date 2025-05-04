@interface AWEPOIOfflineScanInfoDialog : DUXAlertDialog
@property (nonatomic) AWEPOIOfflineScanInfoView rootView;
@property (nonatomic) @? confirmAction;
@property (nonatomic) @? cancelAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshViewWithModel:;
- (void)hideReceivedIcon:;
- (void)onConfirmButtonClick:;
- (void)onCancelButtonClick:;
- (void)updateConfirmAction:;
- (void)updateCancelAction:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setCancelAction:;
- (id)cancelAction;
- (id)rootView;
- (void)setRootView:;
- (void)setupUI;
- (id)confirmAction;
- (void)setConfirmAction:;
- (void)setLoadingState:;
@end
