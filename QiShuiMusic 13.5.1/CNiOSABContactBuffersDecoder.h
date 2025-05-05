@interface CNiOSABContactBuffersDecoder : NSObject
@property (nonatomic) CNContactBufferDecoder decoder;
@property (nonatomic) Q decodeBatchSize;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) BOOL mutableResults;
@property (nonatomic) NSMutableArray contactsWaitingForUnification;
@property (nonatomic) NSMutableDictionary matchInfosWaitingForUnification;
- (id)contactMatchInfosFromABMatchInfos:contacts:;
- (id)init;
- (id)contactsWaitingForUnification;
- (id)matchInfosWaitingForUnification;
- (BOOL)decodeContactsFromData:moreComing:replyHandler:error:;
- (id)unifyContacts:moreComing:;
- (BOOL)mutableResults;
- (id)initWithDecoder:unifyResults:mutableResults:decodeBatchLimit:;
- (void)_addContactMatchInfoFromABMatchInfos:forContact:toDictionary:;
- (BOOL)unifyResults;
- (id)decoder;
- (void).cxx_destruct;
- (id)_contactMatchInfosFromABMatchInfos:contacts:;
- (id)initWithFetchRequest:;
- (unsigned long long)decodeBatchSize;
@end
