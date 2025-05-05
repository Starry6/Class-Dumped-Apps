@interface NWPBOpenConnection : PBCodable
@property (nonatomic) BOOL hasEndpoint;
@property (nonatomic) NWPBEndpoint endpoint;
@property (nonatomic) BOOL hasParameters;
@property (nonatomic) NWPBParameters parameters;
@property (nonatomic) BOOL hasClientUUID;
@property (nonatomic) NSString clientUUID;
- (void)writeTo:;
- (void)setEndpoint:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)parameters;
- (void)setClientUUID:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)endpoint;
- (id)description;
- (void)setParameters:;
- (id)dictionaryRepresentation;
- (id)clientUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasClientUUID;
- (BOOL)hasEndpoint;
- (BOOL)hasParameters;
@end
