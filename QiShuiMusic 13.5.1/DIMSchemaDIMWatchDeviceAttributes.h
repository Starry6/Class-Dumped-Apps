@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isSatellitePaired;
@property (nonatomic) BOOL hasIsSatellitePaired;
@property (nonatomic) NSInteger watchArmOrientation;
@property (nonatomic) BOOL hasWatchArmOrientation;
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
- (void)setIsSatellitePaired:;
- (BOOL)hasIsSatellitePaired;
- (void)setHasIsSatellitePaired:;
- (void)deleteIsSatellitePaired;
- (void)setWatchArmOrientation:;
- (BOOL)hasWatchArmOrientation;
- (void)setHasWatchArmOrientation:;
- (void)deleteWatchArmOrientation;
- (BOOL)isSatellitePaired;
- (int)watchArmOrientation;
@end
