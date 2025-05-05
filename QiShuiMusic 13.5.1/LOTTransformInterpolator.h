@interface LOTTransformInterpolator : NSObject
@property (nonatomic) LOTTransformInterpolator inputNode;
@property (nonatomic) LOTPointInterpolator positionInterpolator;
@property (nonatomic) LOTPointInterpolator anchorInterpolator;
@property (nonatomic) LOTSizeInterpolator scaleInterpolator;
@property (nonatomic) LOTNumberInterpolator rotationInterpolator;
@property (nonatomic) LOTNumberInterpolator positionXInterpolator;
@property (nonatomic) LOTNumberInterpolator positionYInterpolator;
@property (nonatomic) NSString parentKeyName;
- (id)anchorInterpolator;
- (BOOL)hasUpdateForFrame:;
- (id)initWithPosition:rotation:anchor:scale:;
- (id)initWithPositionX:positionY:rotation:anchor:scale:;
- (void)initializeWithPositionX:positionY:position:rotation:anchor:scale:;
- (id)parentKeyName;
- (id)positionInterpolator;
- (id)positionXInterpolator;
- (id)positionYInterpolator;
- (id)rotationInterpolator;
- (id)scaleInterpolator;
- (void)setParentKeyName:;
- (id)transformForFrame:;
- (id)inputNode;
- (void).cxx_destruct;
- (void)setInputNode:;
+ (id)transformForLayer:;
@end
