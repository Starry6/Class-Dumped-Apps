@interface VCPFaceGeometry : NSObject
@property (nonatomic) Q vertexCount;
@property (nonatomic) r^ vertices;
- (void)dealloc;
- (unsigned long long)vertexCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)vertices;
- (id)initWithVertices:vertexCount:;
+ (BOOL)supportsSecureCoding;
@end
