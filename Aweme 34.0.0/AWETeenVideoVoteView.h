@interface AWETeenVideoVoteView : AWEJudgeVideoView
@property (nonatomic) AWEButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)initWithTitle:actionTitle:cancelTitle:;
- (void)updateAcceptAction:;
- (void)resetButtonStatus;
- (void)updateAcceptTitle:;
- (void)updateCancelTitle:;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
- (void)closeButtonTapped:;
- (void)updateTitle:;
@end
