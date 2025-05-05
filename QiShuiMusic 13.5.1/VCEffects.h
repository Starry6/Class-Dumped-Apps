@interface VCEffects : NSObject
@property (nonatomic) NSInteger effectsMode;
@property (nonatomic) BOOL effectsApplied;
@property (nonatomic) BOOL faceMeshTrackingEnabled;
- (id)init;
- (void)dealloc;
- (BOOL)faceMeshTrackingEnabled;
- (void)setFaceMeshTrackingEnabled:;
- (BOOL)effectsApplied;
- (void)setEffectsApplied:;
- (BOOL)addFrame:time:;
- (BOOL)releaseFrameWithTime:;
- (void)setEffectsMode:;
- (int)effectsMode;
@end
