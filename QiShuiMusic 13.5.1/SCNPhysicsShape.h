@interface SCNPhysicsShape : NSObject
@property (nonatomic) NSDictionary options;
@property (nonatomic) @ sourceObject;
@property (nonatomic) NSArray transforms;
- (id)_handle;
- (void)dealloc;
- (id)copy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (id)copyWithZone:;
- (id)transforms;
- (id)sourceObject;
- (id)referenceObject;
- (void)setReferenceObject:;
- (id)initWithContent:options:;
- (id)initWithCachedObject:options:;
- (void)_setTransforms:;
- (void)_customEncodingOfSCNPhysicsShape:;
- (void)_customDecodingOfSCNPhysicsShape:;
+ (BOOL)supportsSecureCoding;
+ (id)shapeWithGeometry:options:;
+ (id)shapeWithShapes:transforms:;
+ (id)shapeWithNode:options:;
+ (id)defaultShapeForGeometry:;
@end
