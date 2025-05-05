@interface BSUIAnimationFactorySettings : PTSettings
@property (nonatomic) BOOL slowAnimations;
@property (nonatomic) double slowDownFactor;
- (void)setDefaultValues;
- (void)setSlowAnimations:;
- (double)slowDownFactor;
- (BOOL)slowAnimations;
- (void)setSlowDownFactor:;
- (double)effectiveSlowDownFactor;
+ (id)settingsControllerModule;
@end
