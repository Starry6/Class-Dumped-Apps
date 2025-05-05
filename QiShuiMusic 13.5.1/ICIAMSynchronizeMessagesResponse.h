@interface ICIAMSynchronizeMessagesResponse : PBCodable
@property (nonatomic) NSMutableArray applicationMessageSyncResponses;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearApplicationMessageSyncResponses;
- (void)addApplicationMessageSyncResponses:;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:;
- (id)applicationMessageSyncResponses;
- (void)setApplicationMessageSyncResponses:;
+ (Class)applicationMessageSyncResponsesType;
@end
