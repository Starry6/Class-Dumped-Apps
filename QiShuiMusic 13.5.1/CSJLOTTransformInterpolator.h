@interface CSJLOTTransformInterpolator : NSObject
@property (nonatomic) CSJLOTTransformInterpolator inputNode;
@property (nonatomic) CSJLOTPointInterpolator positionInterpolator;
@property (nonatomic) CSJLOTPointInterpolator anchorInterpolator;
@property (nonatomic) CSJLOTSizeInterpolator scaleInterpolator;
@property (nonatomic) CSJLOTNumberInterpolator rotationInterpolator;
@property (nonatomic) CSJLOTNumberInterpolator positionXInterpolator;
@property (nonatomic) CSJLOTNumberInterpolator positionYInterpolator;
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
