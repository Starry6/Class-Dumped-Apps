@interface GEOPDPlaceSummaryLayoutUnitSecondaryName : PBCodable
@property (nonatomic) BOOL hasSymbolName;
@property (nonatomic) NSString symbolName;
- (id)symbolName;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setSymbolName:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSymbolName;
+ (BOOL)isValid:;
@end
