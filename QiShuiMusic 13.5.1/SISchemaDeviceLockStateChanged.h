@interface SISchemaDeviceLockStateChanged : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isDeviceLocked;
@property (nonatomic) BOOL hasIsDeviceLocked;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setIsDeviceLocked:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)isDeviceLocked;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasIsDeviceLocked;
- (void)setHasIsDeviceLocked:;
- (void)deleteIsDeviceLocked;
@end
