@interface MHSchemaMHCoreSpeechZeroFilterRunPair : SISchemaInstrumentationMessage
@property (nonatomic) Q zeroRunStartingSample;
@property (nonatomic) BOOL hasZeroRunStartingSample;
@property (nonatomic) Q zeroRunLength;
@property (nonatomic) BOOL hasZeroRunLength;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setZeroRunStartingSample:;
- (BOOL)hasZeroRunStartingSample;
- (void)setHasZeroRunStartingSample:;
- (void)deleteZeroRunStartingSample;
- (void)setZeroRunLength:;
- (BOOL)hasZeroRunLength;
- (void)setHasZeroRunLength:;
- (void)deleteZeroRunLength;
- (unsigned long long)zeroRunStartingSample;
- (unsigned long long)zeroRunLength;
@end
