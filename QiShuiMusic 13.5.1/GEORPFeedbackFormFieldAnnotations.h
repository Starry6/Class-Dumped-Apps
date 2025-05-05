@interface GEORPFeedbackFormFieldAnnotations : PBCodable
@property (nonatomic) BOOL hasKeyString;
@property (nonatomic) NSString keyString;
- (void)readAll:;
- (void)setKeyString:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)keyString;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasKeyString;
+ (BOOL)isValid:;
@end
