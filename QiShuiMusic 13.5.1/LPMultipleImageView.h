@interface LPMultipleImageView : LPComponentView
- (id)sizeThatFits:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)layoutComponentView;
- (id)initWithHost:images:style:;
- (void)ensureImageViews;
- (id)_computeRectForImageAtIndex:fittingSize:width:height:size:multipleImageLayout:;
- (id)_availableSizeForImageNumber:withLayout:withinSize:applyingLayout:;
- (id)layoutImagesForSize:applyingLayout:;
@end
