@interface NWPBHostEndpoint : PBCodable
@property (nonatomic) BOOL hasHostname;
@property (nonatomic) NSString hostname;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) NSString port;
- (id)hostname;
- (void)setHostname:;
- (void)writeTo:;
- (id)port;
- (void)setPort:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasHostname;
- (BOOL)hasPort;
@end
