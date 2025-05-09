@interface ARSpatialMappingResultData : NSObject
@property (nonatomic) NSArray meshChunks;
@property (nonatomic) ^{CV3DReconMeshList=} meshList;
@property (nonatomic) Q sceneReconstruction;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL empty;
@property (nonatomic) <MTLDevice> mtlDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)setEmpty:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)mtlDevice;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (unsigned long long)sceneReconstruction;
- (void)setSceneReconstruction:;
- (id)initWithMeshChunks:;
- (id)initWithMeshList:sceneReconstruction:timestamp:;
- (void)updateSemanticsFromSamplingData:;
- (id)anchorsFromMeshChunksForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)anchorsFromMeshListForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)meshChunks;
- (void)setMeshChunks:;
- (id)meshList;
- (void)setMeshList:;
- (void)setMtlDevice:;
+ (id)emptyResultData;
@end
