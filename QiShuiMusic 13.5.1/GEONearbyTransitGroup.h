@interface GEONearbyTransitGroup : PBCodable
@property (nonatomic) BOOL hasLines;
@property (nonatomic) I lines;
@property (nonatomic) BOOL hasLinesShown;
@property (nonatomic) I linesShown;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (unsigned int)lines;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setLines:;
- (void)setHasLines:;
- (BOOL)hasLines;
- (unsigned int)linesShown;
- (void)setLinesShown:;
- (void)setHasLinesShown:;
- (BOOL)hasLinesShown;
+ (BOOL)isValid:;
@end
