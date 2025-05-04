@interface AWEPaySKMCodeImageView : UIImageView
@property (nonatomic) double codeWidth;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UIImageView dyLogo;
- (id)initWithQRCodeUrl:codeWidth:;
- (double)codeWidth;
- (id)initWithQRCodeImage:codeWidth:;
- (void)setCodeWidth:;
- (id)dyLogo;
- (void)setDyLogo:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)logoImageView;
- (void)setLogoImageView:;
@end
