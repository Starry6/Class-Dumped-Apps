@interface CNPhotoPickerPreviewView : UIView
@property (nonatomic) UIView previewView;
@property (nonatomic) UIView thumbnailContentView;
@property (nonatomic) CAShapeLayer clippingLayer;
- (id)previewView;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupPreview;
- (void)updatePreviewWithItem:;
- (id)thumbnailContentView;
- (void)setThumbnailContentView:;
- (id)clippingLayer;
- (void)setClippingLayer:;
+ (id)pickerPreviewWithFrame:forItem:;
@end
