@interface SISchemaActiveStatus : SISchemaInstrumentationMessage
@property (nonatomic) NSArray audioDevicesActiveWithin24Hours;
@property (nonatomic) BOOL carPlayActiveWithin24Hours;
@property (nonatomic) BOOL hasCarPlayActiveWithin24Hours;
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
- (void)clearAudioDevicesActiveWithin24Hours;
- (void)deleteAudioDevicesActiveWithin24Hours;
- (void)addAudioDevicesActiveWithin24Hours:;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)audioDevicesActiveWithin24HoursAtIndex:;
- (void)setCarPlayActiveWithin24Hours:;
- (BOOL)hasCarPlayActiveWithin24Hours;
- (void)setHasCarPlayActiveWithin24Hours:;
- (void)deleteCarPlayActiveWithin24Hours;
- (id)audioDevicesActiveWithin24Hours;
- (void)setAudioDevicesActiveWithin24Hours:;
- (BOOL)carPlayActiveWithin24Hours;
@end
