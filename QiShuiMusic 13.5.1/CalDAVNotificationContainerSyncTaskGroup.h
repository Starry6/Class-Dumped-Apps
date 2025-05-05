@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup
@property (nonatomic) NSSet notificationTypeNamesToFetch;
- (void).cxx_destruct;
- (id)copyGetTaskWithURL:;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:propertiesToValues:;
- (id)initWithFolderURL:previousCTag:previousSyncToken:accountInfoProvider:taskManager:;
- (id)notificationTypeNamesToFetch;
- (void)setNotificationTypeNamesToFetch:;
@end
