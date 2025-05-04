@interface AWEShareDetailWithQRCodeScreenShootBaseContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) AWEShareContext context;
@property (nonatomic) UIImage fakeQRImage;
@property (nonatomic) BOOL useWarmColorBg;
- (void)setUseWarmColorBg:;
- (BOOL)useWarmColorBg;
- (void)setFakeQRImage:;
- (id)fakeQRImage;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
