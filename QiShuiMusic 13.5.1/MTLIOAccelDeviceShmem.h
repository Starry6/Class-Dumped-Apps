@interface MTLIOAccelDeviceShmem : NSObject
@property (nonatomic) ^v virtualAddress;
@property (nonatomic) I shmemID;
@property (nonatomic) I shmemSize;
- (unsigned int)shmemID;
- (void)dealloc;
- (id)virtualAddress;
- (unsigned int)shmemSize;
- (id)initWithDevice:shmemSize:;
@end
