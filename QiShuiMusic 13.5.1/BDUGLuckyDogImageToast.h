@interface BDUGLuckyDogImageToast : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLab;
@property (nonatomic) UILabel subTitleLab;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) BDUGLuckyDogToastModel model;
- (void)setSubTitleLab:;
- (void)setTitleLab:;
- (id)subTitleLab;
- (id)titleLab;
- (id)model;
- (id)contentView;
- (void)setModel:;
- (id)initWithModel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)imageView;
- (void)setContentView:;
- (void)setImageView:;
@end
