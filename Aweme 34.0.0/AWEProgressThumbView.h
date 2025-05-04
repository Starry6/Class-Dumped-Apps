@interface AWEProgressThumbView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) {UIEdgeInsets=dddd} contentEdgeInsets;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageBorderWidth;
@property (nonatomic) UIColor imageBorderColor;
- (void)setImageBorderWidth:;
- (void)setImageBorderColor:;
- (id)imageBorderColor;
- (id)init;
- (void)setContentEdgeInsets:;
- (id)contentEdgeInsets;
- (void)setImage:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (void)reset;
- (id)imageSize;
- (void)setupUI;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (double)imageCornerRadius;
- (void)setImageCornerRadius:;
- (double)imageBorderWidth;
@end
