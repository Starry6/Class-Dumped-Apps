@interface CJPayImageLabelStateView : UIView
@property (nonatomic) CJPayStyleImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) CJPayStateShowModel showModel;
- (void)p_updateContent;
- (void)setShowModel:;
- (id)showModel;
- (id)initWithModel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (void)setupUI;
@end
