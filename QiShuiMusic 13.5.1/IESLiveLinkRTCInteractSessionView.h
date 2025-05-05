@interface IESLiveLinkRTCInteractSessionView : UIView
@property (nonatomic) UIView videoView;
@property (nonatomic) UIView optionView;
@property (nonatomic) BOOL isHost;
- (BOOL)isAddedToViewTree;
- (void)setIsHost:;
- (void)setVideoView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)willMoveToSuperview:;
- (id)videoView;
- (void)setupViews;
- (BOOL)isHost;
- (void)setOptionView:;
- (id)optionView;
@end
