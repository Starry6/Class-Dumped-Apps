@interface AFSpeakableUtteranceParser : NSObject
@property (nonatomic) BOOL handleTTSCodes;
@property (nonatomic) BOOL handlesFunctions;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (void)registerProvider:forNamespace:;
- (BOOL)handleTTSCodes;
- (void)setHandleTTSCodes:;
- (BOOL)handlesFunctions;
- (void)setHandlesFunctions:;
- (id)_handleProviderAtIndex:withBuffer:totalLength:consumedLength:containsPrivacySensitiveContents:hadEmpties:externalProviders:;
- (id)_handleOptionalAtIndex:withBuffer:totalLength:consumedLength:containsPrivacySensitiveContents:externalProviders:;
- (id)_handleControlCodeAtIndex:withBuffer:totalLength:consumedLength:hadEmpties:containsPrivacySensitiveContents:externalProviders:;
- (id)parseStringWithFormat:includeControlCharacters:error:hadEmpties:containsPrivacySensitiveContents:externalProviders:;
- (id)_parseStringWithFormat:error:hadEmpties:containsPrivacySensitiveContents:externalProviders:;
- (id)parseStringWithFormat:error:;
- (id)parseStringWithFormat:error:hasExternalDomains:;
- (id)parseStringWithFormat:error:containsPrivacySensitiveContents:;
- (id)parseStringWithFormat:error:containsPrivacySensitiveContents:hasExternalDomains:;
- (id)parseStringRemovingControlCharacters:error:;
- (id)parseStringRemovingControlCharacters:error:containsPrivacySensitiveContents:;
+ (BOOL)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:;
@end
