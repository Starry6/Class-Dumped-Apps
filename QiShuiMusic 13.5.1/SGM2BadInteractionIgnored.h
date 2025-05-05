@interface SGM2BadInteractionIgnored : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSInteger reason;
- (BOOL)hasKey;
- (id)reasonAsString:;
- (id)key;
- (void)writeTo:;
- (int)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)mergeFrom:;
- (void)setKey:;
- (void)setHasReason:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)StringAsReason:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
