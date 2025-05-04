@interface AWECardOCRScanView : UIView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIImageView leftTopImageView;
@property (nonatomic) UIImageView rightTopImageView;
@property (nonatomic) UIImageView rightBottomImageView;
@property (nonatomic) UIImageView leftBottomImageView;
@property (nonatomic) double rotationAngle;
@property (nonatomic) NSString bgUrl;
- (void)p_setupUI;
- (void)p_setupData;
- (id)bgUrl;
- (void)setBgUrl:;
- (id)leftTopImageView;
- (id)leftBottomImageView;
- (id)rightBottomImageView;
- (id)rightTopImageView;
- (id)initWithAngle:bgUrl:;
- (void)showCornersView:;
- (void)setLeftTopImageView:;
- (void)setRightTopImageView:;
- (void)setRightBottomImageView:;
- (void)setLeftBottomImageView:;
- (void).cxx_destruct;
- (void)setRotationAngle:;
- (double)rotationAngle;
- (void)setBgImageView:;
- (id)bgImageView;
@end
