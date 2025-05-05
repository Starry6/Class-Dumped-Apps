@interface GEOPDDateTimeRange : PBCodable
@property (nonatomic) BOOL hasValidStartAndEndDates;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasValidStartAndEndDates;
@end
