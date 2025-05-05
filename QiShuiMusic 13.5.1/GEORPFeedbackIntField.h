@interface GEORPFeedbackIntField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) NSInteger original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) NSInteger edited;
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
- (int)original;
- (id)dictionaryRepresentation;
- (int)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasEdited:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
- (void)setHasOriginal:;
+ (BOOL)isValid:;
@end
