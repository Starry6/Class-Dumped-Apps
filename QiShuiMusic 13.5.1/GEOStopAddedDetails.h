@interface GEOStopAddedDetails : PBCodable
@property (nonatomic) BOOL hasStopAddedAction;
@property (nonatomic) NSInteger stopAddedAction;
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
- (int)stopAddedAction;
- (void)setStopAddedAction:;
- (void)setHasStopAddedAction:;
- (BOOL)hasStopAddedAction;
- (id)stopAddedActionAsString:;
- (int)StringAsStopAddedAction:;
+ (BOOL)isValid:;
@end
