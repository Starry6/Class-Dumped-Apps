@interface BMPBScreenSharingEvent : PBCodable
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
- (int)StringAsType:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)setHasIsStart:;
- (void)setIsStart:;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (BOOL)isStart;
- (int)type;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsStart;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
