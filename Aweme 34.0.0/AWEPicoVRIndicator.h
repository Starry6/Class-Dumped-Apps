@interface AWEPicoVRIndicator : UIButton
@property (nonatomic) UIImageView gyroBackgroundImageView;
@property (nonatomic) UIImageView gyroCircleImageView;
@property (nonatomic) BOOL gyroOpen;
- (void)setGyroBackgroundImageView:;
- (id)gyroBackgroundImageView;
- (void)setGyroCircleImageView:;
- (id)gyroCircleImageView;
- (void)setGyroOpen:;
- (BOOL)gyroOpen;
- (id)init;
- (void).cxx_destruct;
- (void)initUI;
@end
