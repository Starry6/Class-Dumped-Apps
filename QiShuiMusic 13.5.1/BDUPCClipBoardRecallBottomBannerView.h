@interface BDUPCClipBoardRecallBottomBannerView : UIView
@property (nonatomic) BDUPCClipBoardRecallBottomBannerConfig config;
@property (nonatomic) q scence;
@property (nonatomic) BDUPCTextView contentTextView;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIButton closeButton;
- (id)contentTextView;
- (id)initWithConfig:inScence:;
- (long long)scence;
- (void)setContentTextView:;
- (void)setScence:;
- (void)setConfig:;
- (void)close;
- (void)show;
- (void)layout;
- (void)setup;
- (void).cxx_destruct;
- (id)config;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)closeButtonTapped:;
- (id)closeButton;
- (void)setCloseButton:;
- (void)confirmButtonTapped:;
@end
