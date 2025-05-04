@interface AWEIMFTSConversationDataSource : NSObject
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString dataSourceId;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) @? completion;
@property (nonatomic) @? filterForDataBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterForDataBlock;
- (void)loadDataBeforeSortOrder:withKeywords:contentTypes:conversationId:pageCount:completion:;
- (void)setFilterForDataBlock:;
- (id)semaphore;
- (id)init;
- (id)completion;
- (void)setCompletion:;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
- (void)cancelTask;
- (id)dataSourceId;
- (void)setDataSourceId:;
@end
