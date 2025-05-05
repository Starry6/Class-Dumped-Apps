@interface FLOWSchemaFLOWPhoneCallEmergencyContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger emergencyCallType;
@property (nonatomic) BOOL hasEmergencyCallType;
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
- (void)setEmergencyCallType:;
- (BOOL)hasEmergencyCallType;
- (void)setHasEmergencyCallType:;
- (void)deleteEmergencyCallType;
- (int)emergencyCallType;
@end
