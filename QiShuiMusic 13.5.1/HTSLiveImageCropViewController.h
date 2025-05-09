@interface HTSLiveImageCropViewController : UIViewController
@property (nonatomic) @? completion;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) {CGSize=dd} cropSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancle;
- (id)cropImage;
- (id)cropSize;
- (id)initWithImage:completion:;
- (void)setCropSize:;
- (id)completion;
- (void)setCompletion:;
- (void)setScrollView:;
- (id)viewForZoomingInScrollView:;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)cropRect;
- (void)setCropRect:;
- (void)setImage:;
- (id)scrollView;
- (void).cxx_destruct;
- (id)imageView;
- (id)image;
- (void)setImageView:;
- (void)viewDidLoad;
- (void)confirm;
@end
