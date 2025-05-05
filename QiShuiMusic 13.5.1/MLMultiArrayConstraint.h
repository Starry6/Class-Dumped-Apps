@interface MLMultiArrayConstraint : NSObject
@property (nonatomic) NSArray shape;
@property (nonatomic) q dataType;
@property (nonatomic) MLMultiArrayShapeConstraint shapeConstraint;
- (id)shape;
- (BOOL)isAllowedValue:error:;
- (id)initWithCoder:;
- (long long)dataType;
- (void)encodeWithCoder:;
- (BOOL)isAllowedShape:error:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithShape:dataType:shapeConstraint:;
- (id)shapeConstraint;
- (BOOL)isAllowedDataType:error:;
- (id)copyWithZone:;
- (BOOL)isAllowedValue:isNeuralNetworkInputOrOutput:usingRank5Mapping:featureName:error:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithShape:dataType:shapeConstraint:;
+ (id)constraintWithShape:dataType:;
@end
