@interface AWEAwemePlayVideoPauseIcon : UIImageView
@property (nonatomic) BOOL isDefaultPauseIcon;
@property (nonatomic) BOOL isStatePaused;
- (void)playAnimationWithPaused:duration:;
- (BOOL)isStatePaused;
- (void)playAnimationWithPaused:duration:customPauseIcon:;
- (id)defaultPauseImage;
- (void)setIsDefaultPauseIcon:;
- (void)setIsStatePaused:;
- (BOOL)isDefaultPauseIcon;
- (void)dimissPauseIcon;
- (id)init;
- (void)reset;
@end
