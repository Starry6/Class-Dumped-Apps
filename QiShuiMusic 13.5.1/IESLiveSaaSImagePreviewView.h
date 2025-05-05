@interface IESLiveSaaSImagePreviewView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) NSString imageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)doubleClick;
- (void)setupSubViews;
- (void)dismiss;
- (void)setScrollView:;
- (id)viewForZoomingInScrollView:;
- (id)scrollView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageURL:;
- (void)setImageView:;
- (id)imageURL;
@end
