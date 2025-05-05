@interface GEORPFeedbackBooleanField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) BOOL original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) BOOL edited;
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
- (BOOL)original;
- (id)dictionaryRepresentation;
- (BOOL)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
