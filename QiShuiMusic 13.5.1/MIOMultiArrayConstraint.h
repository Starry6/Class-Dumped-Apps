@interface MIOMultiArrayConstraint : NSObject
@property (nonatomic) NSArray shape;
@property (nonatomic) q dataType;
@property (nonatomic) MIOMultiArrayShapeConstraint shapeConstraint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shape;
- (long long)dataType;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecification:;
- (id)shapeConstraint;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)arrayFeatureTypeSpecification;
@end
