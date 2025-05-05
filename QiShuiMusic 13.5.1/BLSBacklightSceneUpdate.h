@interface BLSBacklightSceneUpdate : NSObject
@property (nonatomic) BOOL isUpdateToDateSpecifier;
@property (nonatomic) BLSBacklightSceneUpdateContext context;
@property (nonatomic) BOOL sceneContentsUpdated;
@property (nonatomic) BOOL didStartBacklightRamp;
@property (nonatomic) BOOL animationComplete;
- (id)context;
- (BOOL)didStartBacklightRamp;
- (id)initWithVisualState:previousVisualState:frameSpecifier:animated:triggerEvent:touchTargetable:isUpdateToDateSpecifier:sceneContentsUpdated:performBacklightRamp:sceneContentsAnimationComplete:;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)areSceneContentsUpdated;
- (BOOL)isUpdateToDateSpecifier;
- (void).cxx_destruct;
- (void)sceneContentsDidUpdate;
- (void)performBacklightRampWithDuration:;
- (id)description;
- (void)sceneContentsAnimationDidComplete;
- (BOOL)isAnimationComplete;
- (BOOL)isEqual:;
- (void)setReplacedSceneUpdate:;
@end
