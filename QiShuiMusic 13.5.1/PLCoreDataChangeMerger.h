@interface PLCoreDataChangeMerger : NSObject
@property (nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (nonatomic) NSDictionary allDidSaveObjectIDsUserInfo;
- (id)init;
- (void)dealloc;
- (void)handleUnknownMergeEvent;
- (BOOL)isMergingCoalescedSaveNotification;
- (id)allContextsNotIdenticalTo:;
- (void)refreshAllObjects;
- (id)allContexts;
- (void)mergeChangesFromRemoteContextSave:intoAllContextsNotIdenticalTo:completionHandler:;
- (void).cxx_destruct;
- (void)setIsMergingCoalescedSaveNotification:;
- (void)setAllDidSaveObjectIDsUserInfo:;
- (void)invalidate;
- (id)allDidSaveObjectIDsUserInfo;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:completionHandler:;
- (void)registerToReceiveCoreDataChanges:;
@end
