@interface AWEImageTextRefinedLayoutComponent : AWEImageTextBaseComponent
@property (nonatomic) BOOL enableRefinedImageLayout;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)getImageContentInsets;
- (void)setImageContentInsets:animated:duration:;
- (void)updateAlbumContentModeLayout;
- (void)updateCurrentImageContentViewLayout;
- (id)registerProtocol;
- (double)getImageContentTopInset;
- (id)getTemporaryImageViewRectWithMinWHRatio;
- (void)updateImageContentViewTopInsetWithLeftInteractionMinY:authorElementMinY:;
- (void)clearImageContentViewTopInset;
- (unsigned long long)getRefinedImageContentMode:;
- (BOOL)enableRefinedImageLayout;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManager:;
@end
