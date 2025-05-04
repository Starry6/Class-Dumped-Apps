@interface AWEPayRPDetailPromotionView : UIView
@property (nonatomic) UILabel promotionDescLabel;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) @? buttonClickBlock;
- (void)p_setupUI;
- (void)updateWithPromotionInfo:;
- (id)promotionDescLabel;
- (id)buttonClickBlock;
- (void)p_confirmButtonClicked;
- (void)setButtonClickBlock:;
- (void)setPromotionDescLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
