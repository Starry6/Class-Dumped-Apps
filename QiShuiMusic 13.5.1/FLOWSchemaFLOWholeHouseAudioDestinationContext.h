@interface FLOWSchemaFLOWholeHouseAudioDestinationContext : SISchemaInstrumentationMessage
@property (nonatomic) I eligibleDeviceCount;
@property (nonatomic) BOOL hasEligibleDeviceCount;
@property (nonatomic) I deviceSuccessCount;
@property (nonatomic) BOOL hasDeviceSuccessCount;
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
- (void)setEligibleDeviceCount:;
- (BOOL)hasEligibleDeviceCount;
- (void)setHasEligibleDeviceCount:;
- (void)deleteEligibleDeviceCount;
- (void)setDeviceSuccessCount:;
- (BOOL)hasDeviceSuccessCount;
- (void)setHasDeviceSuccessCount:;
- (void)deleteDeviceSuccessCount;
- (unsigned int)eligibleDeviceCount;
- (unsigned int)deviceSuccessCount;
@end
