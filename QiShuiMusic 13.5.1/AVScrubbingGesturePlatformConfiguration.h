@interface AVScrubbingGesturePlatformConfiguration : NSObject
@property (nonatomic) float magnitude;
@property (nonatomic) float nonLinearity;
- (float)magnitude;
- (float)nonLinearity;
+ (id)defaultConfiguration;
+ (id)configurationWithMagnitude:nonLinearity:;
@end
