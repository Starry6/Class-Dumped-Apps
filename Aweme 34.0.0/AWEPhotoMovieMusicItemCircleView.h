@interface AWEPhotoMovieMusicItemCircleView : UIView
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
- (void)setLineWidth:;
- (double)lineWidth;
- (void)drawRect:;
- (void)setCornerRadius:;
- (id)initWithFrame:;
- (double)cornerRadius;
@end
