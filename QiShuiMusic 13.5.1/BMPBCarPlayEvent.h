@interface BMPBCarPlayEvent : PBCodable
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSInteger reason;
- (id)reasonAsString:;
- (void)writeTo:;
- (int)reason;
- (unsigned long long)hash;
- (void)setHasIsStart:;
- (void)setIsStart:;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)mergeFrom:;
- (BOOL)isStart;
- (void)setHasReason:;
- (BOOL)readFrom:;
- (id)description;
- (int)StringAsReason:;
- (id)dictionaryRepresentation;
- (BOOL)hasIsStart;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
