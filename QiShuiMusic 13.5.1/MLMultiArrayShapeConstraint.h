@interface MLMultiArrayShapeConstraint : NSObject
@property (nonatomic) NSOrderedSet shapeSet;
@property (nonatomic) q type;
@property (nonatomic) NSArray sizeRangeForDimension;
@property (nonatomic) NSArray enumeratedShapes;
- (id)initWithCoder:;
- (id)findAvailableShape:;
- (id)initWithEnumeratedShapes:;
- (id)sizeRangeForDimension;
- (void)encodeWithCoder:;
- (id)enumeratedShapes;
- (long long)type;
- (BOOL)isAllowedShape:error:;
- (void).cxx_destruct;
- (id)initUnspecified;
- (id)initWithSizeRangeForDimension:;
- (id)shapeSet;
+ (BOOL)supportsSecureCoding;
@end
