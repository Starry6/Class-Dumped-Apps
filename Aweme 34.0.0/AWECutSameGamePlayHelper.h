@interface AWECutSameGamePlayHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appKey;
- (id)appSecret;
- (id)reshapeConfig;
- (id)getGameplayConfigWithAlgorithm:;
+ (id)dynamicLightWaveConfig;
+ (id)stopmotionConfigWithAlgorithm:;
+ (id)configs;
@end
