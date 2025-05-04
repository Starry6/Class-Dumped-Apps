@interface AWEIMMessageSatatePresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMMsgStateViewModel stateViewModel;
@property (nonatomic) @? viewDidTappedBlock;
@property (nonatomic) BOOL showSendingProgress;
@property (nonatomic) double sendingProgress;
- (void)setSendingProgress:;
- (id)stateViewModel;
- (void)setStateViewModel:;
- (id)viewDidTappedBlock;
- (void)setViewDidTappedBlock:;
- (BOOL)showSendingProgress;
- (void)setShowSendingProgress:;
- (double)sendingProgress;
- (void).cxx_destruct;
@end
