@interface ICDocCamPageContentViewController : UIViewController
@property (nonatomic) UIImageView imageView;
@property (nonatomic) Q pageIndex;
@property (nonatomic) UIImage image;
@property (nonatomic) <ICDocCamPageContentViewTapDelegate> tapDelegate;
- (void)didReceiveMemoryWarning;
- (void)setPageIndex:;
- (void)setImage:;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (id)imageView;
- (id)image;
- (void)setImageView:;
- (void)handleSingleTap:;
- (void)viewDidLoad;
- (void)setTapDelegate:;
- (id)tapDelegate;
+ (double)leadingTrailingOffset:;
@end
