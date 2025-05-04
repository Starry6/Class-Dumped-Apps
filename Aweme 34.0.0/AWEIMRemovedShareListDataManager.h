@interface AWEIMRemovedShareListDataManager : NSObject
- (void)removeWithShareModel:completeBlock:;
- (id)getSharePanelRemovedSecUidList;
- (id)getSharePanelRemovedConversationIdList;
- (void)p_updateRemovedList:;
- (void)p_postRemoveShareModelWithParams:completion:;
- (void)p_postRecoverShareModelWithParams:completion:;
- (void)p_getRecoverModelListWithShareModels:completion:;
- (id)removedSecUserIdListKey;
- (id)removedConversationIdListKey;
- (void)recoverWithShareModels:completeBlock:;
- (BOOL)isBelongToRemovedSecUidList:;
- (BOOL)isBelongToRemovedConversationIdList:;
+ (id)sharedInstance;
@end
