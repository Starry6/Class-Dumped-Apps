@interface AWEShareDetailWithQRCodeIronManScreenShootContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UILabel ironManIconView;
@property (nonatomic) UIView postCardView;
@property (nonatomic) UIView textContainerView;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) double posterHeight;
- (id)imageToSaveToAlbum;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (id)generateImageSize;
- (double)posterHeight;
- (void)setPostCardView:;
- (id)postCardView;
- (void)setIronManIconView:;
- (id)ironManIconView;
- (void)setPosterHeight:;
- (id)imageToShareIM;
- (id)shareContentImage;
- (id)init;
- (void)setContentSize:;
- (id)contentSize;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)setTextContainerView:;
- (id)textContainerView;
- (id)contentViewSize;
@end
