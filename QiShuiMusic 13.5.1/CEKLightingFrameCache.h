@interface CEKLightingFrameCache : NSObject
@property (nonatomic) NSIndexSet _availableAbsoluteAngles;
@property (nonatomic) NSMutableDictionary _foregroundFramesByAvailableAngle;
@property (nonatomic) NSDictionary _backgroundFrameMapsByLightingType;
@property (nonatomic) Q angleCount;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)angleCount;
- (void)preloadForegroundFrames;
- (void)preloadBackgroundFrames;
- (long long)angleOfAvailableFrameForAngle:;
- (id)foregroundFrameForAngle:;
- (id)backgroundFrameForAngle:lightingType:;
- (BOOL)_needsForegroundFrames;
- (BOOL)_needsBackgroundFrame;
- (id)_appearanceForLightingType:;
- (id)_renderForegroundFramesForAbsoluteAngles:scale:;
- (id)_renderBackgroundFramesForAbsoluteAngles:lightingType:scale:;
- (id)_renderFrameForAngle:scale:components:appearance:;
- (id)_availableAbsoluteAngles;
- (id)_foregroundFramesByAvailableAngle;
- (void)set_foregroundFramesByAvailableAngle:;
- (id)_backgroundFrameMapsByLightingType;
- (void)set_backgroundFrameMapsByLightingType:;
@end
