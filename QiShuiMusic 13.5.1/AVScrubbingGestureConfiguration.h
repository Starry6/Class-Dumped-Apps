@interface AVScrubbingGestureConfiguration : NSObject
@property (nonatomic) float syntheticFriction;
@property (nonatomic) BOOL usesNaturalDirection;
@property (nonatomic) AVScrubbingGesturePlatformConfiguration platformConfiguration;
- (void).cxx_destruct;
- (float)syntheticFriction;
- (BOOL)usesNaturalDirection;
- (id)platformConfiguration;
+ (id)defaultConfiguration;
+ (id)configurationWithSyntheticFriction:usesNaturalDirection:platformConfiguration:;
@end
