@interface CJPayHalfScreenSMSVerificationH5Presenter : NSObject
@property (nonatomic) CJPayHalfScreenSMSVerificationViewController vc;
@property (nonatomic) CJPaySMSVerificationRequestModel model;
@property (nonatomic) @? sendingBlock;
- (void)closeWithAction:delayTime:;
- (void)didEnterCode:;
- (void)didTapResendButton;
- (void)goToHelpVC;
- (id)initWithVC:model:sendingBlock:;
- (void)onReceiveH5Message:;
- (id)sendingBlock;
- (void)setSendingBlock:;
- (void)setVc:;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (void)render:;
- (id)vc;
- (void)didTapCloseButton;
@end
