@interface EspressoANEIOSurface : NSObject
@property (nonatomic) {shared_ptr<Espresso::blob<unsigned char external_storage_blob_for_aliasing_mem;
@property (nonatomic) I pixelFormat;
- (void)cleanup;
- (void).cxx_destruct;
- (unsigned int)pixelFormat;
- (id).cxx_construct;
- (void)resizeForMultipleAsyncBuffers:;
- (id)initWithIOSurfaceProperties:andPixelFormats:;
- (BOOL)checkIfMatches:;
- (BOOL)checkIfMatchesIOSurface:;
- (id)createIOSurfaceWithExtraProperties:;
- (void)doNonLazyAllocation:;
- (void)lazilyAutoCreateSurfaceForFrame:;
- (id)ane_io_surfaceForMultiBufferFrame:;
- (id)ioSurfaceForMultiBufferFrame:;
- (id)ioSurfaceForMultiBufferFrameNoLazyForTesting:;
- (void)setExternalStorage:ioSurface:;
- (void)restoreInternalStorage:;
- (void)restoreInternalStorageForAllMultiBufferFrames;
- (id)metalBufferWithDevice:multiBufferFrame:;
- (unsigned long long)nFrames;
- (id)external_storage_blob_for_aliasing_mem;
- (void)setExternal_storage_blob_for_aliasing_mem:;
@end
