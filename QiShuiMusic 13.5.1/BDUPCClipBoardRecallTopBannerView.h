@interface BDUPCClipBoardRecallTopBannerView : UIView
@property (nonatomic) BDUPCClipBoardRecallTopBannerConfig config;
@property (nonatomic) q scence;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BDUPCTextView contentTextView;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIView bottomLine;
- (id)contentTextView;
- (void)addEvent;
- (void)closeGestureSwiped:;
- (id)initWithConfig:inScence:;
- (long long)scence;
- (void)setContentTextView:;
- (void)setScence:;
- (void)setTitleLabel:;
- (void)setConfig:;
- (void)close;
- (void)show;
- (void)layout;
- (void)setup;
- (void).cxx_destruct;
- (id)config;
- (id)titleLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)confirmTapped:;
- (id)bottomLine;
- (void)setBottomLine:;
@end
