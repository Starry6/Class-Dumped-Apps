@interface MDLMorphDeformer : NSObject
@property (nonatomic) MDLAnimatedScalarArray weights;
@property (nonatomic) NSData targetWeights;
@property (nonatomic) NSData targetCounts;
@property (nonatomic) NSArray targetShapes;
@property (nonatomic) NSArray shapeSetTargetWeights;
@property (nonatomic) NSArray shapeSetTargetCounts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weights;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setWeights:;
- (id)targetShapes;
- (id)shapeSetTargetWeights;
- (id)shapeSetTargetCounts;
- (id)initWithOther:;
- (id)initWithTargetShapes:shapeSetTargetWeights:shapeSetTargetCounts:;
- (id)initWithTargetShapes:shapeSetTargetWeights:count:shapeSetTargetCounts:count:;
- (unsigned long long)copyShapeSetTargetWeightsInto:maxCount:;
- (unsigned long long)copyShapeSetTargetCountsInto:maxCount:;
- (id)targetWeights;
- (void)setTargetWeights:;
- (id)targetCounts;
- (void)setTargetCounts:;
@end
