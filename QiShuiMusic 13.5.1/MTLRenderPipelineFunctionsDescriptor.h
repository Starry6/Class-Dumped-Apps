@interface MTLRenderPipelineFunctionsDescriptor : NSObject
@property (nonatomic) NSArray objectAdditionalBinaryFunctions;
@property (nonatomic) NSArray meshAdditionalBinaryFunctions;
@property (nonatomic) NSArray vertexAdditionalBinaryFunctions;
@property (nonatomic) NSArray fragmentAdditionalBinaryFunctions;
@property (nonatomic) NSArray tileAdditionalBinaryFunctions;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)vertexAdditionalBinaryFunctions;
- (void)setVertexAdditionalBinaryFunctions:;
- (id)fragmentAdditionalBinaryFunctions;
- (void)setFragmentAdditionalBinaryFunctions:;
- (id)tileAdditionalBinaryFunctions;
- (void)setTileAdditionalBinaryFunctions:;
- (id)objectAdditionalBinaryFunctions;
- (void)setObjectAdditionalBinaryFunctions:;
- (id)meshAdditionalBinaryFunctions;
- (void)setMeshAdditionalBinaryFunctions:;
@end
