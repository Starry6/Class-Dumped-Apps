@interface AWEMusicGuideToastView : UIView
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UIView guideView;
@property (nonatomic) UIView triangleView;
@property (nonatomic) {CGSize=dd} viewSize;
@property (nonatomic) double triangleViewRightOffset;
@property (nonatomic) NSString message;
- (id)titleLable;
- (void)setTitleLable:;
- (id)triangleView;
- (void)setTriangleView:;
- (void)setTriangleViewRightOffset:;
- (double)triangleViewRightOffset;
- (id)message;
- (id)viewSize;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setViewSize:;
- (id)guideView;
- (void)setGuideView:;
@end
