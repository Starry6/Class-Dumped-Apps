@interface MIOMultiArrayShapeConstraint : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray sizeRangeForDimension;
@property (nonatomic) NSArray enumeratedShapes;
- (id)init;
- (unsigned long long)hash;
- (id)initWithEnumeratedShapes:;
- (id)sizeRangeForDimension;
- (id)enumeratedShapes;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecification:;
- (id)initWithSizeRangeForDimension:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
