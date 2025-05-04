@interface AWEIMPlayVideoAnimationPauseIcon : UIImageView
@property (nonatomic) BOOL isDefaultPauseIcon;
@property (nonatomic) BOOL isStatePaused;
- (void)playAnimationWithPaused:duration:;
- (BOOL)isStatePaused;
- (void)playAnimationWithPaused:duration:customPauseIcon:;
- (id)defaultPauseImage;
- (void)setIsDefaultPauseIcon:;
- (void)setIsStatePaused:;
- (BOOL)isDefaultPauseIcon;
- (id)init;
- (void)reset;
@end
