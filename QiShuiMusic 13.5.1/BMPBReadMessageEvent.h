@interface BMPBReadMessageEvent : PBCodable
@property (nonatomic) BOOL hasIdsHandle;
@property (nonatomic) NSString idsHandle;
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
- (id)idsHandle;
- (void)setIdsHandle:;
- (BOOL)hasIdsHandle;
@end
