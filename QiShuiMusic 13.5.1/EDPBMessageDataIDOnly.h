@interface EDPBMessageDataIDOnly : PBCodable
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) q messageId;
- (long long)messageId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMessageId:;
- (BOOL)hasMessageId;
- (void)setHasMessageId:;
@end
