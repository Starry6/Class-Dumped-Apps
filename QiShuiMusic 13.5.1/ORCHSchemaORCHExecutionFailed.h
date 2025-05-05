@interface ORCHSchemaORCHExecutionFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSString errorString;
@property (nonatomic) BOOL hasErrorString;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasErrorString;
- (void)deleteErrorString;
- (id)errorString;
- (void)setErrorString:;
- (void)setHasErrorString:;
@end
