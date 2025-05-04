@interface AWELunaUgPopViewCoverTxtView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIView customMaskView;
@property (nonatomic) CAGradientLayer maskLayer;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (void)updateTxt:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setupUI;
- (void)setMaskLayer:;
@end
