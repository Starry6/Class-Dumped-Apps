@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSString nextCTag;
@property (nonatomic) NSString previousSyncToken;
@property (nonatomic) Q unexpectedEmptySyncReportResponseRetryAttemptCount;
@property (nonatomic) NSURL folderURL;
@property (nonatomic) NSString previousCTag;
@property (nonatomic) BOOL useSyncCollection;
@property (nonatomic) Q multiGetBatchSize;
@property (nonatomic) BOOL useMultiGet;
@property (nonatomic) <CoreDAVLocalDBInfoProvider> delegate;
@property (nonatomic) Q maxIndependentTasks;
@property (nonatomic) NSURL addMemberURL;
@property (nonatomic) NSDictionary bulkRequests;
@property (nonatomic) NSString bulkChangeCheckCTag;
@property (nonatomic) BOOL actionsOnly;
@property (nonatomic) NSArray localItemURLOrder;
@property (nonatomic) BOOL ensureUpdatedCTag;
@property (nonatomic) Q maxRetryOnUnexpectedSyncTokenChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)propFindTask:parsedResponses:error:;
- (void)task:didFinishWithError:;
- (void)taskGroupWillCancelWithError:;
- (void)startTaskGroup;
- (id)bulkRequests;
- (Class)bulkChangeTaskClass;
- (id)addMemberURL;
- (id)dataContentType;
- (void)setBulkRequests:;
- (void)setAddMemberURL:;
- (void).cxx_destruct;
- (id)description;
- (id)copyGetTaskWithURL:;
- (id)copyMultiGetTaskWithURLs:;
- (id)previousSyncToken;
- (void)bailWithError:;
- (void)cancelTaskGroup;
- (void)deleteTask:completedWithError:;
- (void)putTask:completedWithNewETag:error:;
- (void)getTask:data:error:;
- (void)propPatchTask:parsedResponses:error:;
- (id)initWithFolderURL:previousCTag:previousSyncToken:actions:syncItemOrder:context:accountInfoProvider:taskManager:;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:propertiesToValues:;
- (void)receivedPropertiesToValues:forURL:;
- (void)_tearDownAllUnsubmittedTasks;
- (unsigned long long)_submitTasks;
- (void)_getCTag;
- (id)copyPutTaskWithPayloadItem:forAction:;
- (id)copyPostTaskWithPayloadItem:forAction:;
- (void)_pushActions;
- (void)_sendNextBatch;
- (void)_bulkChange;
- (id)copyGetEtagTaskWithPropertiesToFind:;
- (void)_getETags;
- (void)_getOrder;
- (void)_configureMultiGet:;
- (BOOL)shouldDownloadResource:localETag:serverETag:;
- (void)deleteResourceURLs:;
- (void)_getDataPayloads;
- (void)syncAway;
- (BOOL)isWhitelistedError:;
- (void)applyAdditionalPropertiesFromPutTask:;
- (void)applyAdditionalPropertiesFromPostTask:;
- (void)_postTask:didFinishWithError:;
- (void)_syncReportTask:didFinishWithError:;
- (void)_bulkChangeTask:didFinishWithError:;
- (BOOL)shouldFetchMoreETags;
- (void)_getTask:finishedWithParsedContents:deletedItems:error:;
- (id)folderURL;
- (id)previousCTag;
- (void)setPreviousCTag:;
- (void)setPreviousSyncToken:;
- (BOOL)useSyncCollection;
- (void)setUseSyncCollection:;
- (unsigned long long)multiGetBatchSize;
- (void)setMultiGetBatchSize:;
- (BOOL)useMultiGet;
- (void)setUseMultiGet:;
- (unsigned long long)maxIndependentTasks;
- (void)setMaxIndependentTasks:;
- (id)bulkChangeCheckCTag;
- (void)setBulkChangeCheckCTag:;
- (BOOL)actionsOnly;
- (void)setActionsOnly:;
- (id)localItemURLOrder;
- (BOOL)ensureUpdatedCTag;
- (void)setEnsureUpdatedCTag:;
- (unsigned long long)maxRetryOnUnexpectedSyncTokenChange;
- (void)setMaxRetryOnUnexpectedSyncTokenChange:;
- (id)nextCTag;
- (void)setNextCTag:;
- (unsigned long long)unexpectedEmptySyncReportResponseRetryAttemptCount;
- (void)setUnexpectedEmptySyncReportResponseRetryAttemptCount:;
@end
