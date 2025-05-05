@interface IOSurfaceRemotePerSurfacePerClientState : NSObject
@property (nonatomic) IOSurfaceRemotePerSurfaceGlobalState globalState;
@property (nonatomic) ^{__IOSurfaceClient=} surface;
@property (nonatomic) I debugRefCount;
- (id)surface;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mergeExtraData:;
- (id)initWithSurface:mappedAddress:mappedSize:extraData:;
- (unsigned int)debugRefCount;
- (void)addClientReferenceToSurfaceWithExtraData:;
- (BOOL)removeClientReferenceToSurface;
- (id)globalState;
- (void)setGlobalState:;
@end
