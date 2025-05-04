@interface AWEReactMicrophoneButton : ACCAnimatedButton
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isLockedDisable;
- (void)p_updateIcon;
- (void)mutedMicrophone:;
- (BOOL)isLockedDisable;
- (void)lockButtonDisable:shouldShow:;
- (void)setIsLockedDisable:;
- (id)accessibilityLabel;
- (void)setIsMuted:;
- (BOOL)isMuted;
- (BOOL)isAccessibilityElement;
@end
