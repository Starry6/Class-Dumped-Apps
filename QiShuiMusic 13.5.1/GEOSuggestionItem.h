@interface GEOSuggestionItem : PBCodable
@property (nonatomic) BOOL hasSuggestionString;
@property (nonatomic) NSString suggestionString;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (nonatomic) BOOL initiallyVisible;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasTappingCount;
@property (nonatomic) NSInteger tappingCount;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSuggestionString;
- (id)suggestionString;
- (void)setSuggestionString:;
- (BOOL)initiallyVisible;
- (void)setInitiallyVisible:;
- (void)setHasInitiallyVisible:;
- (BOOL)hasInitiallyVisible;
- (BOOL)eventuallyVisible;
- (void)setEventuallyVisible:;
- (void)setHasEventuallyVisible:;
- (BOOL)hasEventuallyVisible;
- (int)tappingCount;
- (void)setTappingCount:;
- (void)setHasTappingCount:;
- (BOOL)hasTappingCount;
+ (BOOL)isValid:;
@end
