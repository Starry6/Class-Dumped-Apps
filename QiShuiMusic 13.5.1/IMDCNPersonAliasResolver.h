@interface IMDCNPersonAliasResolver : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSData currentHistoryToken;
@property (nonatomic) NSMutableDictionary aliasToCNIDMap;
@property (nonatomic) IMDContactStoreChangeHistoryEventsHandler contactsEventhandler;
- (id)currentHistoryToken;
- (void)setContactStore:;
- (id)_predicateForAlias:;
- (id)init;
- (void)CNRecordIDForAliases:completionHandler:;
- (BOOL)isFavoritedContact:;
- (id)_batchFetchContactRecordIDForAliases:;
- (id)_fetchContactIdentifierForAlias:;
- (id)_updateAliasToCNIDMap:withHistoryToken:;
- (void)setContactsEventhandler:;
- (id)_predicateForEmailAddress:;
- (id)_fetchAliasToCNIDMapForAliases:;
- (void).cxx_destruct;
- (id)contactsEventhandler;
- (id)contactStore;
- (void)setAliasToCNIDMap:;
- (id)aliasToCNIDMap;
- (id)_predicateForPhoneNumber:;
- (BOOL)isCNContactFavorited:;
- (void)setCurrentHistoryToken:;
@end
