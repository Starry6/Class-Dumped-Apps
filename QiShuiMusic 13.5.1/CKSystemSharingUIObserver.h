@interface CKSystemSharingUIObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) CKContainer container;
@property (nonatomic) @? systemSharingUIDidSaveShareBlock;
@property (nonatomic) @? systemSharingUIDidStopSharingBlock;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void)_locked_handleSharingUIUpdatedShare:recordID:isDeleted:error:;
- (void)setCallbackQueue:;
- (void)setSystemSharingUIDidStopSharingBlock:;
- (id)callbackQueue;
- (void)handleSharingUIUpdatedShare:recordID:isDeleted:error:;
- (void).cxx_destruct;
- (void)setSystemSharingUIDidSaveShareBlock:;
- (id)systemSharingUIDidSaveShareBlock;
- (id)systemSharingUIDidStopSharingBlock;
@end
