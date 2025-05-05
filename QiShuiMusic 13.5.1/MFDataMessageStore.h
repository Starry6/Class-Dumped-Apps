@interface MFDataMessageStore : MFMessageStore
@property (nonatomic) @ mailboxUid;
- (id)account;
- (id)storagePath;
- (id)initWithData:;
- (id)message;
- (id)storePath;
- (void).cxx_destruct;
- (void)setMessageClass:;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)_cachedHeadersForMessage:valueIfNotPresent:;
- (id)storeData:forMimePart:isComplete:;
- (id)mailboxUid;
- (id)headerDataForMessage:downloadIfNecessary:;
- (id)bodyDataForMessage:isComplete:isPartial:downloadIfNecessary:;
- (id)_cachedBodyForMessage:valueIfNotPresent:;
- (BOOL)messageCanBeTriaged:;
- (id)_cachedBodyDataForMessage:valueIfNotPresent:;
- (void)setStoragePath:;
- (void)setMailboxUid:;
@end
