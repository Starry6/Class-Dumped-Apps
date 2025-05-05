@interface CFPDMirroredSource : CFPDSource
- (id)acceptMessage:;
- (void)dealloc;
- (void)drainPendingChanges;
- (void)unlock;
- (void)lock;
- (void)handleWritingResult:;
- (void)clearCacheForReason:;
- (int)cacheFileInfoForWriting:euid:egid:didCreate:;
- (BOOL)enqueueNewKey:value:encoding:inBatch:fromMessage:;
- (id)initWithDomain:userName:byHost:managed:mirroredKeys:shmemIndex:daemon:;
- (id)createDiskWrite;
@end
