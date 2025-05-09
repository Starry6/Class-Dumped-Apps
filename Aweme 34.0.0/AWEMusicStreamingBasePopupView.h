@interface AWEMusicStreamingBasePopupView : UIView
@property (nonatomic) UIView customMaskView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) <AWEMusicStreamingPopupViewDelegate> delegate;
@property (nonatomic) @? showBlock;
@property (nonatomic) @? confirmBlock;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)showBlock;
- (void)setShowBlock:;
- (id)confirmBtn;
- (void)setConfirmBtn:;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (void)contentViewPanAction:;
- (void)p_showWithDuration:;
- (void)p_setBasePopupViewUI;
- (void)showInView:duration:;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (void)maskViewTapAction:;
- (void)p_hideWithdMethod:;
- (void)closeBtnHandler;
- (void)confirmBtnHandler;
- (void)hideWithDuration:method:;
- (id)customConfirmButton;
- (id)delegate;
- (void)setShapeLayer:;
- (id)initWithFrame:;
- (id)contentView;
- (id)shapeLayer;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)showInView:;
@end
