@interface ARGeometryElement : NSObject
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) q count;
@property (nonatomic) q bytesPerIndex;
@property (nonatomic) q primitiveType;
@property (nonatomic) q indexCountPerPrimitive;
- (void)setCount:;
- (void)setBuffer:;
- (id)buffer;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)count;
- (BOOL)isEqual:;
- (long long)primitiveType;
- (void)setPrimitiveType:;
- (long long)bytesPerIndex;
- (id)initWithBuffer:count:bytesPerIndex:primitiveType:;
- (long long)indexCountPerPrimitive;
- (void)setBytesPerIndex:;
+ (BOOL)supportsSecureCoding;
@end
