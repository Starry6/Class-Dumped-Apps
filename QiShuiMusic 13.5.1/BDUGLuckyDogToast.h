@interface BDUGLuckyDogToast : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLab;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) BDUGLuckyDogToastModel model;
@property (nonatomic) {CGSize=dd} textSize;
@property (nonatomic) double contentHeight;
- (id)imageWithImageName:;
- (void)setTitleLab:;
- (id)titleLab;
- (id)model;
- (double)contentHeight;
- (id)contentView;
- (void)setModel:;
- (id)initWithModel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)imageView;
- (void)setContentView:;
- (void)setImageView:;
- (void)setContentHeight:;
- (id)textSize;
- (void)setTextSize:;
@end
