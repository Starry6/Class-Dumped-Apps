@interface VCPFaceAnchor : NSObject
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) NSDictionary blendShapes;
@property (nonatomic) VCPFaceGeometry geometry;
- (id)geometry;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)transform;
- (void).cxx_destruct;
- (id)blendShapes;
- (id)initWithTransform:blendShapes:geometry:;
+ (BOOL)supportsSecureCoding;
@end
