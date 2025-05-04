@interface AWEFlashModeSwitchButton : ACCAnimatedButton
@property (nonatomic) q currentFlashMode;
- (void)switchFlashMode:;
- (void)setCurrentFlashMode:;
- (id)iconImageForFlashMode:;
- (id)flashModeIconImageMap;
- (long long)currentFlashMode;
- (id)accessibilityLabel;
- (id)initWithType:;
@end
