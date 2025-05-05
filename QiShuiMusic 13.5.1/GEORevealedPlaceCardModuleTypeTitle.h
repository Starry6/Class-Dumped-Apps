@interface GEORevealedPlaceCardModuleTypeTitle : PBCodable
@property (nonatomic) Q titleElementsCount;
@property (nonatomic) ^i titleElements;
- (void)readAll:;
- (void)dealloc;
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
- (unsigned long long)titleElementsCount;
- (id)titleElements;
- (void)clearTitleElements;
- (void)addTitleElements:;
- (int)titleElementsAtIndex:;
- (void)setTitleElements:count:;
- (id)titleElementsAsString:;
- (int)StringAsTitleElements:;
+ (BOOL)isValid:;
@end
