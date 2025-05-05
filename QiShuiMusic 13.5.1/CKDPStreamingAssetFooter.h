@interface CKDPStreamingAssetFooter : PBCodable
@property (nonatomic) NSInteger status;
@property (nonatomic) NSData md5;
- (void)setStatus:;
- (id)statusAsString:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
- (id)md5;
- (void)setMd5:;
@end
