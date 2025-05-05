@interface ExchangeAccount : IMAPAccount
- (BOOL)shouldFetchACEDBInfoForError:;
- (Class)connectionClass;
- (id)_defaultSpecialMailboxNameForType:;
- (BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (BOOL)storeDraftsOnServer;
- (BOOL)storeSentMessagesOnServer;
- (void)filterMailboxList:forMailbox:options:;
- (void)_filterMailboxList:forMailboxWithPath:iisServer:;
+ (id)accountTypeString;
@end
