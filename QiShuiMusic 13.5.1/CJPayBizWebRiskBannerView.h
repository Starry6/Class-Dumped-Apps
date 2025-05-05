@interface CJPayBizWebRiskBannerView : UIView
@property (nonatomic) CJPayButton closeBtn;
@property (nonatomic) UILabel reskInfoLabel;
@property (nonatomic) UIImageView warningImageView;
@property (nonatomic) UIView backColorView;
@property (nonatomic) @? closeBlock;
- (id)backColorView;
- (id)closeBlock;
- (id)closeBtn;
- (void)p_setupUI;
- (id)reskInfoLabel;
- (void)setBackColorView:;
- (void)setCloseBlock:;
- (void)setCloseBtn:;
- (void)setReskInfoLabel:;
- (void)setWarningImageView:;
- (void)updateWarnContent:;
- (id)warningImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
