@interface GEORPFeedbackFieldAnnotations : PBCodable
@property (nonatomic) BOOL hasTranslatedTextField;
@property (nonatomic) GEORPFeedbackTextField translatedTextField;
@property (nonatomic) BOOL hasTranslatedTextListField;
@property (nonatomic) GEORPFeedbackTextListField translatedTextListField;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasTranslatedTextField;
- (id)translatedTextField;
- (void)setTranslatedTextField:;
- (BOOL)hasTranslatedTextListField;
- (id)translatedTextListField;
- (void)setTranslatedTextListField:;
+ (BOOL)isValid:;
@end
