@interface AWELiveTabPreStreamViewModel : NSObject
@property (nonatomic) BOOL skyLightAnimated;
@property (nonatomic) BOOL showSkyLight;
@property (nonatomic) BOOL enableSkyLight;
- (void)setShowSkyLight:;
- (BOOL)enableSkyLight;
- (void)setEnableSkyLight:;
- (void)showSkyLight:animated:;
- (BOOL)showSkyLight;
- (BOOL)skyLightAnimated;
- (void)setSkyLightAnimated:;
- (id)init;
@end
