@interface GEOPDPlaceSummaryLayoutUnitDistance : PBCodable
@property (nonatomic) BOOL hasMaximumDistanceInMeters;
@property (nonatomic) Q maximumDistanceInMeters;
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
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)maximumDistanceInMeters;
- (void)setMaximumDistanceInMeters:;
- (void)setHasMaximumDistanceInMeters:;
- (BOOL)hasMaximumDistanceInMeters;
+ (BOOL)isValid:;
@end
