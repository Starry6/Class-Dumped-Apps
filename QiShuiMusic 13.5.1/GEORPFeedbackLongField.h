@interface GEORPFeedbackLongField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) q original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) q edited;
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
- (long long)original;
- (id)dictionaryRepresentation;
- (long long)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
