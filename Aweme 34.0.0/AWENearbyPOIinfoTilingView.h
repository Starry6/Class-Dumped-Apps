@interface AWENearbyPOIinfoTilingView : UIView
@property (nonatomic) NSArray viewsArray;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) double imageWidth;
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) NSString text;
- (void)configViews:layoutType:;
- (void)setViewsArray:;
- (void)layoutViewsWithTree;
- (void)layoutViewsWithScrollview;
- (void)addTextLabel;
- (id)viewsArray;
- (id)textLabel;
- (id)init;
- (void)setScrollView:;
- (void)setText:;
- (id)text;
- (id)scrollView;
- (void).cxx_destruct;
- (double)imageWidth;
- (void)setTextLabel:;
- (void)setImageWidth:;
@end
