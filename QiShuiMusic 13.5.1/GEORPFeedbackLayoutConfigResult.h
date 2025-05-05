@interface GEORPFeedbackLayoutConfigResult : PBCodable
@property (nonatomic) NSMutableArray forms;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)forms;
- (void)setForms:;
- (void)clearForms;
- (void)addForm:;
- (unsigned long long)formsCount;
- (id)formAtIndex:;
+ (BOOL)isValid:;
+ (Class)formType;
@end
