@interface MTSchemaMTInvocationFailed : SISchemaInstrumentationMessage
@property (nonatomic) MTSchemaMTError error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NSData jsonData;
- (BOOL)hasError;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setError:;
- (void)setHasError:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)error;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteError;
@end
