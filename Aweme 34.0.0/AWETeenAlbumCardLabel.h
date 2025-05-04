@interface AWETeenAlbumCardLabel : UIView
@property (nonatomic) BOOL labelType;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIImageView bgView;
@property (nonatomic) UILabel titleLabel;
- (void)configWithModel:;
- (void)p_setupView;
- (id)p_labelText;
- (id)p_labelSize;
- (BOOL)p_hasIcon;
- (id)init;
- (BOOL)labelType;
- (void)setLabelType:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bgView;
- (void)setBgView:;
@end
