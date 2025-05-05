@interface NWPBCloseConnection : PBCodable
@property (nonatomic) BOOL hasClientUUID;
@property (nonatomic) NSString clientUUID;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setClientUUID:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)clientUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasClientUUID;
@end
