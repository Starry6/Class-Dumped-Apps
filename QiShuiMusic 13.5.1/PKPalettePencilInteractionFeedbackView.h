@interface PKPalettePencilInteractionFeedbackView : UIView
@property (nonatomic) UIView clippingView;
@property (nonatomic) MTMaterialView backgroundView;
@property (nonatomic) PKPaletteToolPreview toolPreview;
- (id)backgroundView;
- (id)init;
- (id)clippingView;
- (void)setClippingView:;
- (void)layoutSubviews;
- (void)_setCornerRadius:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)toolPreview;
- (void)showPreviewForTool:scalingFactor:animated:;
- (void)setToolPreview:;
@end
