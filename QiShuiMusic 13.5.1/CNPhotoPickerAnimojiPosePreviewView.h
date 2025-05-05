@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView
@property (nonatomic) AVTView avtView;
@property (nonatomic) CAShapeLayer clippingLayer;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)avtView;
- (void)setupPreview;
- (void)updatePreviewWithItem:;
- (id)clippingLayer;
- (void)setClippingLayer:;
- (void)updatePoseWithConfiguration:;
@end
