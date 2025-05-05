@interface UITextMagnifierCommonRenderer : UIView
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)_geometryChanged:forAncestor:;
- (void)update;
- (id)visualsForMagnifier;
- (void)loadImages;
- (void)performOperations:;
- (id)magnifier;
- (id)backgroundColourIfNecessary;
@end
