@interface AWEShareDetailWithQRCodeScreenShootWithUserContentView : AWEShareDetailWithQRCodeScreenShootBaseContentView
@property (nonatomic) UIImage userHeadImage;
- (id)imageToSaveToAlbum;
- (id)saveImageSize;
- (void)fetchQRCodeImageWithContext:completion:;
- (id)userHeadImage;
- (void)setUserHeadImage:;
- (void)wrappedFetchQRCodeImageWithContext:completion:;
- (void).cxx_destruct;
- (void)setUpSubviews;
@end
