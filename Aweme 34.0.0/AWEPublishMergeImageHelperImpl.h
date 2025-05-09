@interface AWEPublishMergeImageHelperImpl : NSObject
@property (nonatomic) double scale;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray operations;
@property (nonatomic) NSMutableArray executeOperations;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) <AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) q maxConcurrentCount;
@property (nonatomic) BOOL background;
@property (nonatomic) q backgroundWaitOperationCount;
@property (nonatomic) NSObject<OS_dispatch_semaphore> backgroundWaitSemaphore;
@property (nonatomic) NSArray allOperation;
@property (nonatomic) NSArray disableSequenceEditServiceIndexs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMaxConcurrentCount:;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)editServiceManager;
- (void)setEditServiceManager:;
- (BOOL)enableIsolateEditAndPublishEditorWithPublishModel:;
- (void)useSequenceEditService:;
- (id)imageWithConfig:completion:;
- (id)disableSequenceEditServiceIndexs;
- (void)setDisableSequenceEditServiceIndexs:;
- (void)useEditServiceManager:;
- (void)setExecuteOperations:;
- (void)setBackgroundWaitSemaphore:;
- (long long)backgroundWaitOperationCount;
- (id)backgroundWaitSemaphore;
- (void)setBackgroundWaitOperationCount:;
- (void)printOperation:executeInfo:;
- (void)lockWithExecuteBlock:;
- (void)removeWithOperationIDs:;
- (id)executeOperations;
- (void)handleOperation:editService:;
- (void)activeEditServiceWithOperation:completion:;
- (BOOL)canUseSequenceEditServiceWithIndex:workspace:;
- (void)finishedOperation:exportItemModel:mergeImage:editService:error:;
- (void)getProcessImageWithOperation:activedEditService:;
- (void)configCanvasSizeWithOperation:completion:;
- (BOOL)isValidSize:;
- (void)resetCanvasSizeIfNeededWithOperation:completion:;
- (id)imagesWithConfig:completion:;
- (void)removeReusableEditServicesIfNeeded;
- (id)allOperation;
- (id)init;
- (void)dealloc;
- (id)operations;
- (void)setLock:;
- (void)execute;
- (double)scale;
- (void)setQueue:;
- (id)lock;
- (BOOL)background;
- (void)setBackground:;
- (void)setOperations:;
- (void).cxx_destruct;
- (void)setScale:;
- (id)queue;
- (long long)maxConcurrentCount;
@end
