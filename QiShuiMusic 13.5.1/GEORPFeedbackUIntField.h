@interface GEORPFeedbackUIntField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) I original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) I edited;
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
- (unsigned int)original;
- (id)dictionaryRepresentation;
- (unsigned int)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
