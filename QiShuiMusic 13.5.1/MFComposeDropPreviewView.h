@interface MFComposeDropPreviewView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView previewView;
@property (nonatomic) UIBezierPath previewClippingPath;
@property (nonatomic) UIImage finalImage;
- (id)previewView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setPreviewView:;
- (id)imageView;
- (void)setImageView:;
- (void)setPreviewClippingPath:;
- (void)setFinalImage:;
- (id)previewClippingPath;
- (id)finalImage;
@end
