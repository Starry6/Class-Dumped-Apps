@interface SISchemaEngagedAccessoryContext : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (nonatomic) NSInteger homeKitAccessoryType;
@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (nonatomic) NSString accessoryBrand;
@property (nonatomic) BOOL hasAccessoryBrand;
@property (nonatomic) NSString accessoryModel;
@property (nonatomic) BOOL hasAccessoryModel;
@property (nonatomic) BOOL isAudioPlaybackCapable;
@property (nonatomic) BOOL hasIsAudioPlaybackCapable;
@property (nonatomic) BOOL isThirdPartyMusicEnabled;
@property (nonatomic) BOOL hasIsThirdPartyMusicEnabled;
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
- (id)accessoryId;
- (void)setAccessoryId:;
- (BOOL)hasAccessoryId;
- (void)deleteAccessoryId;
- (void)setHomeKitAccessoryType:;
- (BOOL)hasHomeKitAccessoryType;
- (void)setHasHomeKitAccessoryType:;
- (void)deleteHomeKitAccessoryType;
- (BOOL)hasAccessoryBrand;
- (void)deleteAccessoryBrand;
- (BOOL)hasAccessoryModel;
- (void)deleteAccessoryModel;
- (void)setIsAudioPlaybackCapable:;
- (BOOL)hasIsAudioPlaybackCapable;
- (void)setHasIsAudioPlaybackCapable:;
- (void)deleteIsAudioPlaybackCapable;
- (void)setIsThirdPartyMusicEnabled:;
- (BOOL)hasIsThirdPartyMusicEnabled;
- (void)setHasIsThirdPartyMusicEnabled:;
- (void)deleteIsThirdPartyMusicEnabled;
- (int)homeKitAccessoryType;
- (id)accessoryBrand;
- (void)setAccessoryBrand:;
- (id)accessoryModel;
- (void)setAccessoryModel:;
- (BOOL)isAudioPlaybackCapable;
- (BOOL)isThirdPartyMusicEnabled;
- (void)setHasAccessoryId:;
- (void)setHasAccessoryBrand:;
- (void)setHasAccessoryModel:;
@end
