@interface AWEProfileQRCodeView : UIView
@property (nonatomic) UIImageView qrCodeIcon;
@property (nonatomic) AWEProfileHeaderContext context;
- (void)configWithContext:;
- (BOOL)shouldIconAlignCenter;
- (void)qrcodeIconTapped;
- (void)updateLayoutWithNameLabelLineHeight:;
- (void)addQRCodeIcon;
- (void)setQrCodeIcon:;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)qrCodeIcon;
+ (double)qrCodeViewWidth;
@end
