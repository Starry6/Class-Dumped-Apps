@interface AWEShareDetailWithRebrandQRCodeProfileContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIView qrCodeView;
@property (nonatomic) UIView logoBgView;
@property (nonatomic) CAGradientLayer bgLayer;
- (id)bgLayer;
- (void)setBgLayer:;
- (id)imageToSaveToAlbum;
- (id)saveImageSize;
- (id)qrCodeView;
- (void)setQrCodeView:;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (double)logoScale;
- (void)setLogoBgView:;
- (id)logoBgView;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (id)contentViewSize;
- (void)setBgImageView:;
- (id)bgImageView;
- (void)setTemplateModel:;
@end
