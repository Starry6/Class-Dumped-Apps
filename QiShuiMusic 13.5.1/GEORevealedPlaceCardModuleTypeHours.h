@interface GEORevealedPlaceCardModuleTypeHours : PBCodable
@property (nonatomic) NSMutableArray buttons;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)buttons;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)setButtons:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearButtons;
- (unsigned long long)buttonsCount;
- (void)addButtons:;
- (id)buttonsAtIndex:;
+ (BOOL)isValid:;
+ (Class)buttonsType;
@end
