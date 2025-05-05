@interface DODMLASRSchemaDODMLASRConfusionPair : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID asrId;
@property (nonatomic) BOOL hasAsrId;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSData jsonData;
- (BOOL)hasErrorCode;
- (int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAsrId;
- (void)deleteAsrId;
- (id)asrId;
- (void)setAsrId:;
- (void)setHasAsrId:;
- (void)deleteErrorCode;
@end
