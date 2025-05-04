@interface AWEShareDetailWithQRCodeIMGroupNewContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UIImageView rightAlignImageView;
@property (nonatomic) AWEShareContext context;
@property (nonatomic) UILabel secondLine;
@property (nonatomic) UIButton button;
- (id)imageToSaveToAlbum;
- (id)saveImageSize;
- (void)syncContentFrom:;
- (void)setRightAlignImageView:;
- (id)rightAlignImageView;
- (void)onTapCopyButton;
- (void)setButton:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)button;
- (id)secondLine;
- (void)setSecondLine:;
- (void)setUpSubviews;
- (id)contentViewSize;
@end
