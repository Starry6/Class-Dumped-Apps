@interface FLOWSchemaFLOWMediaPlayerRadioStationContext : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSInteger radioStationSubtype;
@property (nonatomic) BOOL hasRadioStationSubtype;
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
- (int)radioStationSubtype;
- (id)linkId;
- (void)setLinkId:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (void)setRadioStationSubtype:;
- (BOOL)hasRadioStationSubtype;
- (void)setHasRadioStationSubtype:;
- (void)deleteRadioStationSubtype;
@end
