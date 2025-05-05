@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSString responseModel;
@property (nonatomic) BOOL hasResponseModel;
@property (nonatomic) NSString patternId;
@property (nonatomic) BOOL hasPatternId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)patternId;
- (void)setPatternId:;
- (BOOL)hasPatternId;
- (void)deletePatternId;
- (void)setHasPatternId:;
- (BOOL)hasResponseModel;
- (void)deleteResponseModel;
- (id)responseModel;
- (void)setResponseModel:;
- (void)setHasResponseModel:;
@end
