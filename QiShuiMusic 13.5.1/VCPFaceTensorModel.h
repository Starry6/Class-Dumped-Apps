@interface VCPFaceTensorModel : NSObject
@property (nonatomic) NSInteger numVertices;
@property (nonatomic) ^f meanBlendshape;
@property (nonatomic) ^f tensorCoeff;
@property (nonatomic) ^f componentsBlendshape;
@property (nonatomic) ^i blendshapeComponentIndex;
- (void)dealloc;
- (int)numVertices;
- (id)initWithModelFile:;
- (void)calculateModelBlendshapes:outputBlendshapes:;
- (void)calculateMesh:numVertices:blendshapes:outputMesh:;
- (id)meanBlendshape;
- (id)tensorCoeff;
- (id)componentsBlendshape;
- (id)blendshapeComponentIndex;
@end
