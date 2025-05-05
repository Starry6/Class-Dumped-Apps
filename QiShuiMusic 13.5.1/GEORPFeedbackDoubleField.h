@interface GEORPFeedbackDoubleField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) double original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) double edited;
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
- (double)original;
- (id)dictionaryRepresentation;
- (double)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
