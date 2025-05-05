@interface PGMobilePIPSettings : PTSettings
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOffsetX;
@property (nonatomic) double shadowOffsetY;
@property (nonatomic) double shadowContinuousCornerRadius;
- (double)shadowOpacity;
- (double)shadowRadius;
- (void)setDefaultValues;
- (void)setShadowRadius:;
- (void)setShadowOpacity:;
- (double)shadowOffsetX;
- (double)shadowOffsetY;
- (double)shadowContinuousCornerRadius;
- (void)setShadowOffsetX:;
- (void)setShadowOffsetY:;
- (void)setShadowContinuousCornerRadius:;
+ (id)settingsControllerModule;
@end
