@interface MTLIOAccelDeviceShmemPool : NSObject
- (void)purge;
- (void)dealloc;
- (int)availableCount;
- (unsigned int)shmemSize;
- (void)prune;
- (void)setShmemSize:;
- (id)initWithDevice:resourceClass:shmemSize:options:;
@end
