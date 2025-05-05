@interface OTICDPRecordSilentContext : PBCodable
@property (nonatomic) BOOL hasCdpInfo;
@property (nonatomic) OTCDPRecoveryInformation cdpInfo;
@property (nonatomic) BOOL hasAuthInfo;
@property (nonatomic) OTEscrowAuthenticationInformation authInfo;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)authInfo;
- (void)setAuthInfo:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasCdpInfo;
- (BOOL)hasAuthInfo;
- (id)cdpInfo;
- (void)setCdpInfo:;
@end
