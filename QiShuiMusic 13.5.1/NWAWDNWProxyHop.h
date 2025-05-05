@interface NWAWDNWProxyHop : PBCodable
@property (nonatomic) BOOL hasProxyName;
@property (nonatomic) NSString proxyName;
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
- (BOOL)hasProxyName;
- (id)proxyName;
- (void)setProxyName:;
@end
