@interface FTCPPETParticipant : PBCodable
@property (nonatomic) Q hashedId;
@property (nonatomic) BOOL isContact;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)hashedId;
- (void)setHashedId:;
- (BOOL)isContact;
- (void)setIsContact:;
@end
