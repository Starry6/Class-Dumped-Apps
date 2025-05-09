@interface CFPrefsSearchListSource : CFPrefsSource
- (id)domainIdentifier;
- (long long)generationCount;
- (void)dealloc;
- (id)createRequestNewContentMessageForDaemon:;
- (void)alreadylocked_setPrecopiedValues:forKeys:count:from:;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:fromValue:toValue:;
- (BOOL)synchronize;
- (void)unlock;
- (void)lock;
- (id)alreadylocked_copyKeyList;
- (id)copyOSLogDescription;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:;
- (id)alreadylocked_copyValueForKey:;
- (BOOL)isDirectModeEnabled;
- (id)alreadylocked_copyDictionary;
- (id)description;
- (void)fullCloudSynchronizeWithCompletionHandler:;
- (void)handleChangeNotificationForDomainIdentifier:isRemote:;
- (id)initWithIdentifier:containingPreferences:;
- (void)handleReply:toRequestNewDataMessage:onConnection:retryCount:error:;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:toDictionary:;
- (id)copyWithZone:;
@end
