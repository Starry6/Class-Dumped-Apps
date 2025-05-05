@interface AFEUploadView : UIView
@property (nonatomic) UIImage uploadingImage;
@property (nonatomic) APBDTFUploadToastView DTFUploadingView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView backgroundImageView;
- (id)DTFUploadingView;
- (void)beginUploading;
- (void)setDTFUploadingView:;
- (void)setUploadingImage:;
- (void)stopUploading;
- (id)uploadingImage;
- (void)verifyAnimation:;
- (id)backgroundImageView;
- (id)backgroundView;
- (void)layoutSubviews;
- (void)setLabel:;
- (id)label;
- (void)setBackgroundImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setBackgroundImageView:;
@end
