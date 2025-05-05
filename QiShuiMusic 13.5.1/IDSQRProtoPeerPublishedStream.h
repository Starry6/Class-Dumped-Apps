@interface IDSQRProtoPeerPublishedStream : PBCodable
@property (nonatomic) Q peerParticipantId;
@property (nonatomic) Q peerStreamIdsCount;
@property (nonatomic) ^I peerStreamIds;
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
- (unsigned long long)peerStreamIdsCount;
- (id)peerStreamIds;
- (void)clearPeerStreamIds;
- (void)addPeerStreamIds:;
- (unsigned int)peerStreamIdsAtIndex:;
- (void)setPeerStreamIds:count:;
- (unsigned long long)peerParticipantId;
- (void)setPeerParticipantId:;
@end
