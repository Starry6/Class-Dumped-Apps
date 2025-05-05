@interface IESLiveMultiAuidoStartPanel : HTSLivePopUpView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton startButton;
@property (nonatomic) IESLiveEmptyView defaultView;
@property (nonatomic) BOOL didClickStart;
@property (nonatomic) @? closeCompletion;
@property (nonatomic) @? startCompletion;
- (void)setDefaultView:;
- (id)closeCompletion;
- (id)startCompletion;
- (BOOL)didClickStart;
- (void)didSetAttachingDIContext;
- (void)hideWithDestroy:;
- (void)setDidClickStart:;
- (void)setStartCompletion:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (id)startButton;
- (void)setStartButton:;
- (id)defaultView;
- (void)setCloseCompletion:;
- (void)layoutUI;
@end
