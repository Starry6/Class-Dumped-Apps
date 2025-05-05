@interface ORCHSchemaORCHASRCallFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NSData jsonData;
- (BOOL)hasError;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setError:;
- (void)setHasError:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)error;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteError;
@end
