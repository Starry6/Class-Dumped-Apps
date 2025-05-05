@interface PKRecognitionDrawingPreviewViewController : UIViewController
@property (nonatomic) UIImage drawingImage;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScrollView:;
- (id)viewForZoomingInScrollView:;
- (id)scrollView;
- (void).cxx_destruct;
- (id)imageView;
- (void)scrollViewDidZoom:;
- (void)viewDidLayoutSubviews;
- (void)setImageView:;
- (void)viewDidLoad;
- (void)centerImageView;
- (id)initWithDrawingImage:;
- (id)drawingImage;
- (void)setDrawingImage:;
@end
