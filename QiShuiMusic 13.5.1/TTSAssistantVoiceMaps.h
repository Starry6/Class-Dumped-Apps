@interface TTSAssistantVoiceMaps : NSObject
@property (nonatomic) NSDictionary voicesForLanguageMap;
@property (nonatomic) NSDictionary deprecatedVoicesMap;
@property (nonatomic) NSDictionary relativePitchOrderForVoicesMap;
@property (nonatomic) NSDictionary relativeOrderForVoicesMap;
@property (nonatomic) NSDictionary identifiersForVoicesMap;
- (id)init;
- (id)deprecatedVoicesMap;
- (void).cxx_destruct;
- (id)voicesForLanguageMap;
- (id)relativePitchOrderForVoicesMap;
- (id)relativeOrderForVoicesMap;
- (id)identifiersForVoicesMap;
@end
