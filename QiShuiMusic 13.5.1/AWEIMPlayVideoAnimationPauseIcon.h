@interface AWEIMPlayVideoAnimationPauseIcon : UIImageView
@property (nonatomic) BOOL isDefaultPauseIcon;
- (id)defaultPauseImage;
- (BOOL)isDefaultPauseIcon;
- (void)playAnimationWithPaused:duration:;
- (void)playAnimationWithPaused:duration:customPauseIcon:;
- (void)setIsDefaultPauseIcon:;
- (id)init;
- (void)reset;
@end
