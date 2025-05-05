@interface ARMeshGeometry : NSObject
@property (nonatomic) ARGeometrySource vertices;
@property (nonatomic) ARGeometrySource normals;
@property (nonatomic) ARGeometryElement faces;
@property (nonatomic) ARGeometrySource classification;
- (id)faces;
- (id)initWithCoder:;
- (id)classification;
- (void)encodeWithCoder:;
- (void)setClassification:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setFaces:;
- (id)vertices;
- (void)setVertices:;
- (id)normals;
- (void)setNormals:;
- (id)initWithVertices:normals:faces:;
+ (BOOL)supportsSecureCoding;
@end
