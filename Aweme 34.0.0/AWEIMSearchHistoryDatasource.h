@interface AWEIMSearchHistoryDatasource : NSObject
- (id)p_modelForStorageModel:;
- (id)p_modelForUserWithUid:;
- (id)p_modelForConversationWithConversationID:;
- (id)p_modelForConversationWithSessionID:;
- (id)p_modelForForceInsertConversationWithSessionID:;
- (BOOL)p_objectIsOnlineWithKey:;
- (id)historyModelList;
@end
