@interface IESECGoodsScreenShotNewView : UIView
@property (nonatomic) UIImageView goodImageView;
@property (nonatomic) UIView qrCodeView;
@property (nonatomic) UIImageView qrCodeImage;
@property (nonatomic) UIView textView;
@property (nonatomic) IESECGoodsScreenShotShareModel shareModel;
@property (nonatomic) UIImage screenShotImage;
- (void)QRCodeImageCompletionWithUrlList:avatarUrlList:error:placeholder:expireTime:completion:;
- (id)screenShotImage;
- (void)createScreenShotView:;
- (void)fetchQRCode:;
- (id)goodImageView;
- (id)initWithFrame:shareModel:fullScreenShotImage:;
- (id)qrCodeView;
- (void)setGoodImageView:;
- (void)setQrCodeView:;
- (void)setScreenShotImage:;
- (id)textView;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)shareModel;
- (void)setShareModel:;
- (id)qrCodeImage;
- (void)setQrCodeImage:;
@end
