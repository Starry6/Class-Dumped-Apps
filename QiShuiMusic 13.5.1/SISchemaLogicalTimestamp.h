@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage
@property (nonatomic) q timestampInNanoseconds;
@property (nonatomic) BOOL hasTimestampInNanoseconds;
@property (nonatomic) SISchemaUUID clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
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
- (void)setTimestampInNanoseconds:;
- (void)setClockIdentifier:;
- (id)clockIdentifier;
- (BOOL)hasTimestampInNanoseconds;
- (void)setHasTimestampInNanoseconds:;
- (void)deleteTimestampInNanoseconds;
- (BOOL)hasClockIdentifier;
- (void)deleteClockIdentifier;
- (long long)timestampInNanoseconds;
- (void)setHasClockIdentifier:;
@end
