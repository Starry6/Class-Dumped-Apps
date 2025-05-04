@interface AWEImageTextRefinedLayoutController : AWEBaseController
@property (nonatomic) BOOL isRefinedImageLayoutEnable;
@property (nonatomic) Q currentImageRefinedRefinedContentMode;
- (BOOL)isRefinedImageLayoutEnable;
- (double)getImageContentTopInset;
- (id)getTemporaryImageViewRectWithMinWHRatio;
- (void)updateImageContentViewTopInsetWithLeftInteractionMinY:authorElementMinY:;
- (void)clearImageContentViewTopInset;
- (id)getImageContentInsets;
- (void)setImageContentInsets:animated:duration:;
- (void)updateAlbumContentModeLayout;
- (unsigned long long)currentImageRefinedRefinedContentMode;
- (id)init;
@end
