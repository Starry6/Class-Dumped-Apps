@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaLogicalTimestamp timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) SISchemaUUID testFingerprint;
@property (nonatomic) BOOL hasTestFingerprint;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasTimestamp:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteTimestamp;
- (BOOL)hasTestFingerprint;
- (void)deleteTestFingerprint;
- (id)testFingerprint;
- (void)setTestFingerprint:;
- (void)setHasTestFingerprint:;
@end
