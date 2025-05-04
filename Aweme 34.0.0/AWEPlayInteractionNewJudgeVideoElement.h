@interface AWEPlayInteractionNewJudgeVideoElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEJudgeVideoView judgeVideoView;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay;
- (id)judgeVideoView;
- (void)setJudgeVideoView:;
- (void)updateJudgeVideoView;
- (void)hideJudgeVideoView;
- (void)showJudgeVideoView;
- (void)handleVideo:accept:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
