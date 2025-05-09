@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isMultiUser;
@property (nonatomic) BOOL hasIsMultiUser;
@property (nonatomic) I nlRerunTimeInMs;
@property (nonatomic) BOOL hasNlRerunTimeInMs;
@property (nonatomic) NSArray userScores;
@property (nonatomic) NSInteger ORCHUserIdentityClassification;
@property (nonatomic) BOOL hasORCHUserIdentityClassification;
@property (nonatomic) BOOL isOutsider;
@property (nonatomic) BOOL hasIsOutsider;
@property (nonatomic) NSString voiceIdAssetVersion;
@property (nonatomic) BOOL hasVoiceIdAssetVersion;
@property (nonatomic) BOOL isSelectedUserPartOfMultipleHomes;
@property (nonatomic) BOOL hasIsSelectedUserPartOfMultipleHomes;
@property (nonatomic) NSString selectedSharedUserId;
@property (nonatomic) BOOL hasSelectedSharedUserId;
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
- (BOOL)isMultiUser;
- (id)selectedSharedUserId;
- (void)setSelectedSharedUserId:;
- (void)setIsMultiUser:;
- (BOOL)hasIsMultiUser;
- (void)setHasIsMultiUser:;
- (void)deleteIsMultiUser;
- (void)setNlRerunTimeInMs:;
- (BOOL)hasNlRerunTimeInMs;
- (void)setHasNlRerunTimeInMs:;
- (void)deleteNlRerunTimeInMs;
- (void)clearUserScores;
- (void)deleteUserScores;
- (void)addUserScores:;
- (unsigned long long)userScoresCount;
- (id)userScoresAtIndex:;
- (void)setORCHUserIdentityClassification:;
- (BOOL)hasORCHUserIdentityClassification;
- (void)setHasORCHUserIdentityClassification:;
- (void)deleteORCHUserIdentityClassification;
- (void)setIsOutsider:;
- (BOOL)hasIsOutsider;
- (void)setHasIsOutsider:;
- (void)deleteIsOutsider;
- (BOOL)hasVoiceIdAssetVersion;
- (void)deleteVoiceIdAssetVersion;
- (void)setIsSelectedUserPartOfMultipleHomes:;
- (BOOL)hasIsSelectedUserPartOfMultipleHomes;
- (void)setHasIsSelectedUserPartOfMultipleHomes:;
- (void)deleteIsSelectedUserPartOfMultipleHomes;
- (BOOL)hasSelectedSharedUserId;
- (void)deleteSelectedSharedUserId;
- (unsigned int)nlRerunTimeInMs;
- (id)userScores;
- (void)setUserScores:;
- (int)ORCHUserIdentityClassification;
- (BOOL)isOutsider;
- (id)voiceIdAssetVersion;
- (void)setVoiceIdAssetVersion:;
- (BOOL)isSelectedUserPartOfMultipleHomes;
- (void)setHasVoiceIdAssetVersion:;
- (void)setHasSelectedSharedUserId:;
@end
