@interface AWEIMMsbBoxAutoManagementManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
- (void)batchUpdateIntoMsgBoxWithData:completion:;
- (void)checkAutoMangementDatas:completion:;
- (BOOL)enableShowAutoManagementMsgboxTest;
- (BOOL)enableShowMsgboxTopNoticeTipTest;
- (void)fetchAllAutoManagementDatas:completion:;
- (void)setWorkQueue:;
- (id)workQueue;
- (void)setSem:;
- (void).cxx_destruct;
- (id)sem;
+ (id)sharedManager;
@end
