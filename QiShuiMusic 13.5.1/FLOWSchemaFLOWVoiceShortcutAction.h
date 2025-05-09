@interface FLOWSchemaFLOWVoiceShortcutAction : SISchemaInstrumentationMessage
@property (nonatomic) NSString appId;
@property (nonatomic) BOOL hasAppId;
@property (nonatomic) NSString intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (nonatomic) NSString intentName;
@property (nonatomic) BOOL hasIntentName;
@property (nonatomic) NSString intentNLDomain;
@property (nonatomic) BOOL hasIntentNLDomain;
@property (nonatomic) NSData jsonData;
- (void)setHasIntentCategory:;
- (id)appId;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setAppId:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasIntentCategory;
- (void)setIntentCategory:;
- (id)intentCategory;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAppId;
- (id)intentName;
- (BOOL)hasIntentName;
- (void)setIntentName:;
- (void)deleteAppId;
- (void)deleteIntentCategory;
- (void)deleteIntentName;
- (BOOL)hasIntentNLDomain;
- (void)deleteIntentNLDomain;
- (id)intentNLDomain;
- (void)setIntentNLDomain:;
- (void)setHasAppId:;
- (void)setHasIntentName:;
- (void)setHasIntentNLDomain:;
@end
