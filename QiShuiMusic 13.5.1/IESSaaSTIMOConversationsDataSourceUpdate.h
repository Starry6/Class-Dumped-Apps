@interface IESSaaSTIMOConversationsDataSourceUpdate : NSObject
@property (nonatomic) NSArray previousData;
@property (nonatomic) NSArray nowData;
@property (nonatomic) IGListIndexSetResult cachedDiff;
@property (nonatomic) NSArray deleteConversationIdentifiers;
@property (nonatomic) NSArray addConversationIdentifiers;
@property (nonatomic) NSArray fetchConversationsMonitorArray;
@property (nonatomic) NSArray beforeUpdateConversationIdentifiers;
@property (nonatomic) NSArray afterUpdateConversationIdentifiers;
- (id)nowData;
- (id)addConversationIdentifiers;
- (id)afterUpdateConversationIdentifiers;
- (id)beforeUpdateConversationIdentifiers;
- (id)cachedDiff;
- (id)calcDiffs;
- (id)deleteConversationIdentifiers;
- (id)fetchConversationsMonitorArray;
- (id)previousData;
- (void)setAddConversationIdentifiers:;
- (void)setCachedDiff:;
- (void)setDeleteConversationIdentifiers:;
- (void)setFetchConversationsMonitorArray:;
- (void)setNowData:;
- (void)setPreviousData:;
- (void).cxx_destruct;
@end
