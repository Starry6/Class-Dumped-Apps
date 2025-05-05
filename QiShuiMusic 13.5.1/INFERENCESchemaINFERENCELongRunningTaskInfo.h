@interface INFERENCESchemaINFERENCELongRunningTaskInfo : SISchemaInstrumentationMessage
@property (nonatomic) Q durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
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
- (void)setDurationInMs:;
- (BOOL)hasDurationInMs;
- (void)setHasDurationInMs:;
- (void)deleteDurationInMs;
- (unsigned long long)durationInMs;
@end
