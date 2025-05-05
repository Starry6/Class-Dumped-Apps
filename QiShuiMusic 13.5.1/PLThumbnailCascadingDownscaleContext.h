@interface PLThumbnailCascadingDownscaleContext : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)downscaleImageSurface:destinationCount:sizes:cropModes:pixelFormat:bytesPerRowAlignment:destinationData:;
- (void)_cleanupTimerFired;
- (void).cxx_destruct;
- (void)discardContexts;
@end
