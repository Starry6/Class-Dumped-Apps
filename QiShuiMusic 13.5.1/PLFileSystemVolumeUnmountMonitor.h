@interface PLFileSystemVolumeUnmountMonitor : NSObject
- (id)initWithVolumeURL:;
- (void)dealloc;
- (void)removeVolumeUnmountObserver:;
- (void)addVolumeUnmountObserver:;
- (void).cxx_destruct;
- (id)description;
@end
