@interface BUFileSyncTask : NSObject
@property (nonatomic) NSOperationQueue queue;
- (BOOL)checkMd5:location:;
- (void)downloadWithMeta:at:block:;
- (void)syncFileWithMeta:completion:;
- (void)syncFileWithMeta:file:completion:;
- (BOOL)upzipTo:from:;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
@end
