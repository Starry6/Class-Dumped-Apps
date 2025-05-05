@interface GEOPDComponent : PBCodable
@property (nonatomic) BOOL hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;
- (BOOL)statusCodeIsValid;
- (void)setHasTimestampFirstSeen:;
- (double)timestampFirstSeen;
- (id)jsonRepresentation;
- (BOOL)hasTimestampFirstSeen;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setTimestampFirstSeen:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
