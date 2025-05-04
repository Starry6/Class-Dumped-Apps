@interface AWEStudioUnusedDraftCleanPlugin : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialCleanQueue;
@property (nonatomic) @? currentCleanTask;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:;
- (double)cleanSizeWithStrategy:;
- (void)cancelCleanTask;
- (void)cleanDirectoryContentsAtPath:;
- (id)serialCleanQueue;
- (void)setSerialCleanQueue:;
- (id)currentCleanTask;
- (void)setCurrentCleanTask:;
- (id)init;
- (void)dealloc;
- (void)setIsCancelled:;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
@end
