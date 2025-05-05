@interface GEOLogMsgEventPOIPredictionData : PBCodable
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) Q muid;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
- (void)setHasMuid:;
- (BOOL)hasMuid;
- (void)setMuid:;
- (void)readAll:;
- (double)confidence;
- (void)setConfidence:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)muid;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
+ (BOOL)isValid:;
@end
