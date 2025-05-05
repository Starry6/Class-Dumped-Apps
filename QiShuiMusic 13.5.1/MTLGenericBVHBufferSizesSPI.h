@interface MTLGenericBVHBufferSizesSPI : NSObject
@property (nonatomic) Q version;
@property (nonatomic) Q headerBufferSize;
@property (nonatomic) Q innerNodeBufferSize;
@property (nonatomic) Q leafNodeBufferSize;
@property (nonatomic) Q primitiveBufferSize;
@property (nonatomic) Q geometryBufferSize;
@property (nonatomic) Q instanceTransformBufferSize;
@property (nonatomic) Q perPrimitiveDataBufferSize;
- (unsigned long long)version;
- (id)initWithVersion:;
- (unsigned long long)headerBufferSize;
- (void)setHeaderBufferSize:;
- (unsigned long long)innerNodeBufferSize;
- (void)setInnerNodeBufferSize:;
- (unsigned long long)leafNodeBufferSize;
- (void)setLeafNodeBufferSize:;
- (unsigned long long)primitiveBufferSize;
- (void)setPrimitiveBufferSize:;
- (unsigned long long)geometryBufferSize;
- (void)setGeometryBufferSize:;
- (unsigned long long)instanceTransformBufferSize;
- (void)setInstanceTransformBufferSize:;
- (unsigned long long)perPrimitiveDataBufferSize;
- (void)setPerPrimitiveDataBufferSize:;
@end
