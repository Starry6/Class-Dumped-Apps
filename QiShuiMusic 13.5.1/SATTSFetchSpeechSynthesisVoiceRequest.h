@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand
@property (nonatomic) NSArray clientVoiceKeyList;
@property (nonatomic) SATTSSpeechSynthesisVoice filteredVoiceKey;
@property (nonatomic) NSString gender;
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setLanguageCode:;
- (id)gender;
- (id)languageCode;
- (void)setGender:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clientVoiceKeyList;
- (void)setClientVoiceKeyList:;
- (id)filteredVoiceKey;
- (void)setFilteredVoiceKey:;
+ (id)fetchSpeechSynthesisVoiceRequest;
+ (id)fetchSpeechSynthesisVoiceRequestWithDictionary:context:;
@end
