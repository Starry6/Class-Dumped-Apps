@interface IDSGroupEncryptionKeyMaterial : NSObject
@property (nonatomic) NSUUID keyIndex;
@property (nonatomic) NSData keySalt;
@property (nonatomic) NSData keyMaterial;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) BOOL isSentToClient;
@property (nonatomic) BOOL isGeneratedLocally;
@property (nonatomic) I generationCounter;
@property (nonatomic) NSString groupID;
@property (nonatomic) Q participantID;
- (id)groupID;
- (id)initWithDictionary:;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compare:;
- (void).cxx_destruct;
- (id)createdAt;
- (id)description;
- (id)dictionaryRepresentation;
- (id)keyMaterial;
- (unsigned long long)participantID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setParticipantID:;
- (unsigned int)generationCounter;
- (BOOL)isGeneratedLocally;
- (id)keyIndex;
- (void)setGenerationCounter:;
- (id)initWithIndex:groupID:participantID:;
- (id)initWithKeyMaterial:keySalt:keyIndex:groupID:;
- (id)initWithKeyMaterial:keySalt:keyIndex:groupID:participantID:;
- (id)initWithKeyMaterial:keySalt:keyIndex:groupID:generationCounter:participantID:;
- (id)initWithKeyMaterial:keySalt:keyIndex:groupID:isGeneratedLocally:createdAt:generationCounter:participantID:;
- (void)changeCreatedAt:;
- (void)sentToDevice:;
- (void)removeDeviceFromSentToDevice:;
- (BOOL)isEqualToRealTimeEncryptionKeyMaterial:;
- (BOOL)isSentToClient;
- (void)setIsSentToClient:;
- (void)setIsGeneratedLocally:;
- (id)keySalt;
+ (unsigned int)locallyGeneratedKeysCounter;
+ (void)setLocallyGeneratedKeysCounter:;
+ (id)keyOriginIdentifier;
@end
