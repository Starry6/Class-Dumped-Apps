@interface MDLMesh : MDLObject
@property (nonatomic) Q subdivisionScheme;
@property (nonatomic) {?=} boundingBox;
@property (nonatomic) MDLVertexDescriptor vertexDescriptor;
@property (nonatomic) Q vertexCount;
@property (nonatomic) NSArray vertexBuffers;
@property (nonatomic) NSMutableArray submeshes;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
- (id)boundingBox;
- (id)vertexDescriptor;
- (unsigned long long)vertexCount;
- (void)setVertexDescriptor:;
- (void).cxx_destruct;
- (id)vertexBuffers;
- (id)description;
- (id)allocator;
- (id).cxx_construct;
- (void)setVertexBuffers:;
- (void)setVertexCount:;
- (id)submeshes;
- (void)flipTextureCoordinatesInAttributeNamed:;
- (void)addOrthTanBasisForTextureCoordinateAttributeNamed:normalAttributeNamed:tangentAttributeNamed:;
- (id)initCylinderWithExtent:segments:inwardNormals:topCap:bottomCap:geometryType:allocator:;
- (id)initConeWithExtent:segments:inwardNormals:cap:geometryType:allocator:;
- (id)initBoxWithExtent:segments:inwardNormals:geometryType:allocator:;
- (id)initSphereWithExtent:segments:inwardNormals:geometryType:allocator:;
- (id)initWithVertexBuffers:vertexCount:descriptor:submeshes:;
- (id)vertexAttributeDataForAttributeNamed:;
- (void)setSubmeshes:;
- (id)initIcosahedronWithExtent:inwardNormals:geometryType:allocator:;
- (id)initHemisphereWithExtent:segments:inwardNormals:cap:geometryType:allocator:;
- (id)initMeshBySubdividingMesh:submeshIndex:subdivisionLevels:allocator:;
- (id)initCapsuleWithExtent:cylinderSegments:hemisphereSegments:inwardNormals:geometryType:allocator:;
- (id)initWithBufferAllocator:;
- (id)initPlaneWithExtent:segments:geometryType:allocator:;
- (void)debugPrintToFile:;
- (void)removeAttributeNamed:;
- (id)initWithVertexBuffer:vertexCount:descriptor:submeshes:;
- (void)_createWithVertexBuffer:vertexCount:descriptor:submeshes:;
- (void)createSourceDataVector:attr:srcElementCount:dstElementCount:;
- (void)copyDataVector:toAttr:;
- (id)vertexAttributeDataForAttributeNamed:asFormat:;
- (unsigned long long)subdivisionScheme;
- (void)setSubdivisionScheme:;
- (void)replaceAttributeNamed:withData:;
- (void)updateAttributeNamed:withData:;
- (long long)addVertexBuffer:;
- (void)addAttributeWithName:format:;
- (void)addAttributeWithName:format:type:data:stride:;
- (void)addAttributeWithName:format:type:data:stride:time:;
- (void)_calculateTangentBasisFromPositions:positionStride:positionsBufferSize:normals:normalStride:normalsBufferSize:uvs:uvStride:uvsBufferSize:tangents:tangentsStride:tangentsBufferSize:bitagents:bitangentStride:bitangentsBufferSize:tangentFormat:selector:;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:tangentAttributeNamed:bitangentAttributeNamed:;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:normalAttributeNamed:tangentAttributeNamed:;
- (void)_calculateFaceNormalsFromPositions:positionStride:normals:normalStride:creaseThreshold:;
- (BOOL)triangulate;
- (void)addNormalsWithAttributeNamed:creaseThreshold:;
- (void)addUnwrappedTextureCoordinatesForAttributeNamed:;
- (void)makeVerticesUnique;
- (BOOL)makeVerticesUniqueAndReturnError:;
- (int)submeshCount;
- (void)_enumerateSubmeshesUsingBlock:stopPointer:;
- (void)enumerateSubmeshesUsingBlock:;
- (id)controlNodeForINdex:;
- (id)inverseBasePoseForIndex:;
- (BOOL)generateAmbientOcclusionTextureWithSize:raysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:;
- (BOOL)generateAmbientOcclusionTextureWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:;
- (BOOL)generateAmbientOcclusionVertexColorsWithRaysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:;
- (BOOL)generateAmbientOcclusionVertexColorsWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:;
- (BOOL)generateLightMapTextureWithTextureSize:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:;
- (BOOL)generateLightMapTextureWithQuality:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:;
- (BOOL)generateLightMapVertexColorsWithLightsToConsider:objectsToConsider:vertexAttributeNamed:;
+ (id)meshWithSCNGeometry:;
+ (id)meshWithSCNGeometry:bufferAllocator:;
+ (id)newEllipticalConeWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:;
+ (id)newBoxWithDimensions:segments:geometryType:inwardNormals:allocator:;
+ (id)newIcosahedronWithRadius:inwardNormals:geometryType:allocator:;
+ (id)newIcosahedronWithRadius:inwardNormals:allocator:;
+ (id)newEllipsoidWithRadii:radialSegments:verticalSegments:geometryType:inwardNormals:hemisphere:allocator:;
+ (id)newSubdividedMesh:submeshIndex:subdivisionLevels:;
+ (id)newCapsuleWithHeight:radii:radialSegments:verticalSegments:hemisphereSegments:geometryType:inwardNormals:allocator:;
+ (id)newPlaneWithDimensions:segments:geometryType:allocator:;
+ (id)newCylinderWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:;
@end
