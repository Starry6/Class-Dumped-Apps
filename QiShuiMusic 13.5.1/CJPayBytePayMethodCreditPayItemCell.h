@interface CJPayBytePayMethodCreditPayItemCell : UICollectionViewCell
@property (nonatomic) UIView borderView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel iconLabel;
@property (nonatomic) UIView iconBgView;
@property (nonatomic) UIView iconView;
@property (nonatomic) CJPayBytePayCreditPayMethodModel model;
- (id)iconBgView;
- (void)p_setupUI;
- (void)setIconBgView:;
- (id)model;
- (void)setModel:;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)borderView;
- (void)setBorderView:;
- (id)iconLabel;
- (void)setIconLabel:;
@end
