@interface GEORPFeedbackULongField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) Q original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) Q edited;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setEdited:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (unsigned long long)original;
- (id)dictionaryRepresentation;
- (unsigned long long)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
