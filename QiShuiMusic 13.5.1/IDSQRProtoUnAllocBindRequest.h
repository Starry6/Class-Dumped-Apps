@interface IDSQRProtoUnAllocBindRequest : PBRequest
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSInteger reason;
- (id)reasonAsString:;
- (void)writeTo:;
- (int)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)mergeFrom:;
- (void)setHasReason:;
- (BOOL)readFrom:;
- (id)description;
- (int)StringAsReason:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
