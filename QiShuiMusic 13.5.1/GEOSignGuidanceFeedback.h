@interface GEOSignGuidanceFeedback : PBCodable
@property (nonatomic) BOOL hasSignTitleIndex;
@property (nonatomic) NSInteger signTitleIndex;
@property (nonatomic) BOOL hasSignDetailIndex;
@property (nonatomic) NSInteger signDetailIndex;
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
- (int)signTitleIndex;
- (void)setSignTitleIndex:;
- (void)setHasSignTitleIndex:;
- (BOOL)hasSignTitleIndex;
- (int)signDetailIndex;
- (void)setSignDetailIndex:;
- (void)setHasSignDetailIndex:;
- (BOOL)hasSignDetailIndex;
+ (BOOL)isValid:;
@end
