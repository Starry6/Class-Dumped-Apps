@interface NLXSchemaCDMServiceFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger code;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSData jsonData;
- (BOOL)hasErrorCode;
- (void)setHasCode:;
- (int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)code;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (BOOL)hasCode;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setCode:;
- (BOOL)isEqual:;
- (void)deleteErrorCode;
- (void)deleteCode;
@end
