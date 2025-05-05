@interface IDSQRProtoParticipantUpdateRequest : PBRequest
@property (nonatomic) I operationFlags;
@property (nonatomic) Q participantIdListsCount;
@property (nonatomic) ^Q participantIdLists;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) I sessionStateCounter;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)participantIdListsCount;
- (id)participantIdLists;
- (void)clearParticipantIdLists;
- (void)addParticipantIdList:;
- (unsigned long long)participantIdListAtIndex:;
- (void)setParticipantIdLists:count:;
- (void)setSessionStateCounter:;
- (void)setHasSessionStateCounter:;
- (BOOL)hasSessionStateCounter;
- (unsigned int)operationFlags;
- (void)setOperationFlags:;
- (unsigned int)sessionStateCounter;
@end
