@interface CJPayPayAgainDiscountView : UIView
@property (nonatomic) UILabel discountLabel;
@property (nonatomic) UIImageView discountImageView;
@property (nonatomic) UIView bgView;
@property (nonatomic) BOOL isHiddenImageView;
- (void)setDiscountStr:;
- (id)discountImageView;
- (id)discountLabel;
- (id)initWithFrame:hiddenImageView:;
- (BOOL)isHiddenImageView;
- (void)p_setupUI;
- (void)setDiscountImageView:;
- (void)setDiscountLabel:;
- (void)setIsHiddenImageView:;
- (void)drawRect:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
@end
