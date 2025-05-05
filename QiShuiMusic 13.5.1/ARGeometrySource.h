@interface ARGeometrySource : NSObject
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) q count;
@property (nonatomic) Q format;
@property (nonatomic) q componentsPerVector;
@property (nonatomic) q offset;
@property (nonatomic) q stride;
- (void)setCount:;
- (void)setFormat:;
- (void)setBuffer:;
- (void)setOffset:;
- (id)buffer;
- (unsigned long long)format;
- (long long)stride;
- (id)initWithCoder:;
- (long long)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)count;
- (void)setStride:;
- (BOOL)isEqual:;
- (long long)componentsPerVector;
- (id)initWithBuffer:count:format:componentsPerVector:offset:stride:;
- (unsigned long long)componentSize;
- (void)setComponentsPerVector:;
+ (BOOL)supportsSecureCoding;
@end
