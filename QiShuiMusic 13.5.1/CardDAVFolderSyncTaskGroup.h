@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup
@property (nonatomic) BOOL isInitialSync;
- (Class)bulkChangeTaskClass;
- (id)dataContentType;
- (void)setIsInitialSync:;
- (id)initWithFolderURL:previousCTag:previousSyncToken:actions:syncItemOrder:context:accountInfoProvider:taskManager:appSpecificDataItemClass:;
- (id)initWithFolderURL:previousCTag:previousSyncToken:actions:context:accountInfoProvider:taskManager:appSpecificDataItemClass:;
- (id)copyGetTaskWithURL:;
- (id)copyMultiGetTaskWithURLs:;
- (BOOL)isInitialSync;
@end
