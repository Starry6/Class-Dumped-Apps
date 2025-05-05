@interface ASRSchemaASRAppLanguageModelLoadEnded : SISchemaInstrumentationMessage
@property (nonatomic) Q loadTimeInNs;
@property (nonatomic) BOOL hasLoadTimeInNs;
@property (nonatomic) Q foregroundCheckTimeInNs;
@property (nonatomic) BOOL hasForegroundCheckTimeInNs;
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
- (void)setLoadTimeInNs:;
- (BOOL)hasLoadTimeInNs;
- (void)setHasLoadTimeInNs:;
- (void)deleteLoadTimeInNs;
- (void)setForegroundCheckTimeInNs:;
- (BOOL)hasForegroundCheckTimeInNs;
- (void)setHasForegroundCheckTimeInNs:;
- (void)deleteForegroundCheckTimeInNs;
- (unsigned long long)loadTimeInNs;
- (unsigned long long)foregroundCheckTimeInNs;
@end
