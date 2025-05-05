@interface IDSQRProtoInfoRequest : PBRequest
@property (nonatomic) I infoFlags;
@property (nonatomic) BOOL hasAccessToken;
@property (nonatomic) NSData accessToken;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)accessToken;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAccessToken:;
- (BOOL)hasAccessToken;
- (unsigned int)infoFlags;
- (void)setInfoFlags:;
@end
