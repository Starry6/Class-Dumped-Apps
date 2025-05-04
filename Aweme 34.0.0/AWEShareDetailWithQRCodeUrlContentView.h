@interface AWEShareDetailWithQRCodeUrlContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UIView textContainerView;
@property (nonatomic) Q coverImageSizeType;
@property (nonatomic) BOOL showsSecondLine;
- (id)imageToSaveToAlbum;
- (id)saveImageSize;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (BOOL)showsSecondLine;
- (unsigned long long)coverImageSizeType;
- (double)coverImageViewHeight;
- (void)setShowsSecondLine:;
- (void)setCoverImageSizeType:;
- (void)updateUIConstraints;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)setTextContainerView:;
- (id)textContainerView;
- (id)contentViewSize;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
@end
