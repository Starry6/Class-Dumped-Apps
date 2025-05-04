@interface AWEIMDownloadAnimationButton : UIButton
@property (nonatomic) NSString normalImageName;
@property (nonatomic) NSString rotationImageName;
- (void)setNormalImageName:;
- (void)setRotationImageName:;
- (id)rotationImageName;
- (void)rotateAnimation;
- (id)normalImageName;
- (id)initWithImageNamed:rotationImageName:;
- (id)init;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setSelected:;
- (void)stopAnimation;
@end
