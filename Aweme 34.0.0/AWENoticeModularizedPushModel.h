@interface AWENoticeModularizedPushModel : NSObject
@property (nonatomic) NSDictionary normalMobParams;
@property (nonatomic) BOOL enableModularizedLightInteraction;
@property (nonatomic) Q modularizedType;
@property (nonatomic) NSString lightInteractionSource;
@property (nonatomic) NSString modularizedTrackPushType;
- (id)lightInteractionSource;
- (id)normalMobParams;
- (void)setNormalMobParams:;
- (id)modularizedTrackPushType;
- (BOOL)enableModularizedLightInteraction;
- (unsigned long long)modularizedType;
- (void)setEnableModularizedLightInteraction:;
- (void)setModularizedType:;
- (void)setLightInteractionSource:;
- (void)setModularizedTrackPushType:;
- (void).cxx_destruct;
+ (id)initWithDictionary:;
@end
