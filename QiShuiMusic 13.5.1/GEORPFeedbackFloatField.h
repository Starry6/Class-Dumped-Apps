@interface GEORPFeedbackFloatField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) float original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) float edited;
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
- (float)original;
- (id)dictionaryRepresentation;
- (float)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
