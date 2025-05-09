@interface POMMESSchemaPOMMESDeviceState : SISchemaInstrumentationMessage
@property (nonatomic) NSString companionName;
@property (nonatomic) BOOL hasCompanionName;
@property (nonatomic) BOOL isCarDoNotDisturbModeEnabled;
@property (nonatomic) BOOL hasIsCarDoNotDisturbModeEnabled;
@property (nonatomic) BOOL isCarPlayEnabled;
@property (nonatomic) BOOL hasIsCarPlayEnabled;
@property (nonatomic) BOOL isEyesFreeEnabled;
@property (nonatomic) BOOL hasIsEyesFreeEnabled;
@property (nonatomic) BOOL isLockedWithPasscode;
@property (nonatomic) BOOL hasIsLockedWithPasscode;
@property (nonatomic) BOOL isMultiUserDevice;
@property (nonatomic) BOOL hasIsMultiUserDevice;
@property (nonatomic) BOOL isTextToSpeechEnabled;
@property (nonatomic) BOOL hasIsTextToSpeechEnabled;
@property (nonatomic) BOOL isVoiceTriggerEnabled;
@property (nonatomic) BOOL hasIsVoiceTriggerEnabled;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasCompanionName;
- (void)deleteCompanionName;
- (void)setIsCarDoNotDisturbModeEnabled:;
- (BOOL)hasIsCarDoNotDisturbModeEnabled;
- (void)setHasIsCarDoNotDisturbModeEnabled:;
- (void)deleteIsCarDoNotDisturbModeEnabled;
- (void)setIsCarPlayEnabled:;
- (BOOL)hasIsCarPlayEnabled;
- (void)setHasIsCarPlayEnabled:;
- (void)deleteIsCarPlayEnabled;
- (void)setIsEyesFreeEnabled:;
- (BOOL)hasIsEyesFreeEnabled;
- (void)setHasIsEyesFreeEnabled:;
- (void)deleteIsEyesFreeEnabled;
- (void)setIsLockedWithPasscode:;
- (BOOL)hasIsLockedWithPasscode;
- (void)setHasIsLockedWithPasscode:;
- (void)deleteIsLockedWithPasscode;
- (void)setIsMultiUserDevice:;
- (BOOL)hasIsMultiUserDevice;
- (void)setHasIsMultiUserDevice:;
- (void)deleteIsMultiUserDevice;
- (void)setIsTextToSpeechEnabled:;
- (BOOL)hasIsTextToSpeechEnabled;
- (void)setHasIsTextToSpeechEnabled:;
- (void)deleteIsTextToSpeechEnabled;
- (void)setIsVoiceTriggerEnabled:;
- (BOOL)hasIsVoiceTriggerEnabled;
- (void)setHasIsVoiceTriggerEnabled:;
- (void)deleteIsVoiceTriggerEnabled;
- (id)companionName;
- (void)setCompanionName:;
- (BOOL)isCarDoNotDisturbModeEnabled;
- (BOOL)isCarPlayEnabled;
- (BOOL)isEyesFreeEnabled;
- (BOOL)isLockedWithPasscode;
- (BOOL)isMultiUserDevice;
- (BOOL)isTextToSpeechEnabled;
- (BOOL)isVoiceTriggerEnabled;
- (void)setHasCompanionName:;
@end
