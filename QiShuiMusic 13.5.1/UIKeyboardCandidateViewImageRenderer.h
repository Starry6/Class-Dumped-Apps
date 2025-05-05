@interface UIKeyboardCandidateViewImageRenderer : NSObject
@property (nonatomic) NSCache imageCache;
@property (nonatomic) UIView viewForTraitCollection;
- (id)imageCache;
- (id)init;
- (void)setImageCache:;
- (void).cxx_destruct;
- (id)highlightedBarCellBackgroundImageWithColor:insets:;
- (id)pocketShadowImageForDarkKeyboard:fadesToBottom:drawShadow:topPadding:bottomPadding:height:;
- (id)handwritingCellBackgroundImageForDarkKeyboard:highlighted:;
- (id)extensionMaskImage;
- (id)edgeMaskImageForRightSide:;
- (id)drawGradientImage:startPoint:endPoint:applyScale:;
- (id)viewForTraitCollection;
- (void)setViewForTraitCollection:;
+ (id)sharedImageRenderer;
@end
