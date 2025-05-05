@interface BMPBDKEvent : PBCodable
@property (nonatomic) BOOL hasDkEvent;
@property (nonatomic) NSData dkEvent;
- (id)dkEvent;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setDkEvent:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasDkEvent;
@end
