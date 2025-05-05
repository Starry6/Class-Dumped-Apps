@interface CLPMotionActivity : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSInteger confidence;
- (int)confidence;
- (void)setConfidence:;
- (int)StringAsType:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (int)type;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (id)confidenceAsString:;
- (int)StringAsConfidence:;
@end
