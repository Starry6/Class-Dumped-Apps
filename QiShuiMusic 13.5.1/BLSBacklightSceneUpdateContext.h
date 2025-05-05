@interface BLSBacklightSceneUpdateContext : NSObject
@property (nonatomic) BLSBacklightSceneVisualState visualState;
@property (nonatomic) BLSBacklightSceneVisualState previousVisualState;
@property (nonatomic) BLSAlwaysOnFrameSpecifier frameSpecifier;
@property (nonatomic) BOOL animated;
@property (nonatomic) BLSBacklightChangeEvent triggerEvent;
@property (nonatomic) BOOL touchTargetable;
- (id)frameSpecifier;
- (id)visualState;
- (BOOL)isTouchTargetable;
- (BOOL)isAnimated;
- (id)triggerEvent;
- (unsigned long long)hash;
- (id)previousVisualState;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithVisualState:previousVisualState:frameSpecifier:animated:triggerEvent:touchTargetable:;
@end
