@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage
@property (nonatomic) I year;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) I month;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) NSData jsonData;
- (unsigned int)month;
- (unsigned int)year;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setYear:;
- (BOOL)isEqual:;
- (void)setMonth:;
- (BOOL)hasMonth;
- (void)setHasMonth:;
- (BOOL)hasYear;
- (void)setHasYear:;
- (void)deleteYear;
- (void)deleteMonth;
@end
