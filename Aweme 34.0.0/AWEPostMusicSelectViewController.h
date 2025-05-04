@interface AWEPostMusicSelectViewController : AWEMusicSelectContainerViewController
@property (nonatomic) DUXButton finishButton;
@property (nonatomic) UIView bottomContainerView;
@property (nonatomic) @? completeSelectBlock;
- (void)setCompleteSelectBlock:;
- (void)setFinishButton:;
- (void)setAddMusicNum:;
- (long long)topViewStyle;
- (id)completeSelectBlock;
- (void)p_completeSelect;
- (void)didMoveToParentViewController:;
- (void)viewDidLoad;
- (id)subTitle;
- (void).cxx_destruct;
- (id)bottomContainerView;
- (void)setBottomContainerView:;
- (id)finishButton;
@end
