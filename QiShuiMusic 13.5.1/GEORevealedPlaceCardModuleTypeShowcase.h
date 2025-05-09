@interface GEORevealedPlaceCardModuleTypeShowcase : PBCodable
@property (nonatomic) BOOL hasShowcaseId;
@property (nonatomic) NSString showcaseId;
@property (nonatomic) NSMutableArray buttons;
- (void)setShowcaseId:;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)buttons;
- (void)copyTo:;
- (BOOL)hasShowcaseId;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setButtons:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)showcaseId;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearButtons;
- (unsigned long long)buttonsCount;
- (void)addButtons:;
- (id)buttonsAtIndex:;
+ (BOOL)isValid:;
+ (Class)buttonsType;
@end
