@interface SISchemaHardwareButtonInvocationContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger hardwareButtonLongPressBehavior;
@property (nonatomic) BOOL hasHardwareButtonLongPressBehavior;
@property (nonatomic) float hardwareButtonActivationThresholdInSec;
@property (nonatomic) BOOL hasHardwareButtonActivationThresholdInSec;
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
- (void)setHardwareButtonLongPressBehavior:;
- (BOOL)hasHardwareButtonLongPressBehavior;
- (void)setHasHardwareButtonLongPressBehavior:;
- (void)deleteHardwareButtonLongPressBehavior;
- (void)setHardwareButtonActivationThresholdInSec:;
- (BOOL)hasHardwareButtonActivationThresholdInSec;
- (void)setHasHardwareButtonActivationThresholdInSec:;
- (void)deleteHardwareButtonActivationThresholdInSec;
- (int)hardwareButtonLongPressBehavior;
- (float)hardwareButtonActivationThresholdInSec;
@end
