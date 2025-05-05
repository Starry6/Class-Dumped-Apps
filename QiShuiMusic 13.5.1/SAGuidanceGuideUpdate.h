@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand
@property (nonatomic) SAGuidanceGuideSnippet guideSnippet;
@property (nonatomic) NSNumber guideTag;
@property (nonatomic) NSString languageCode;
@property (nonatomic) SAGuidanceSuggestedUtterances suggestedUtterances;
- (id)groupIdentifier;
- (void)setLanguageCode:;
- (id)languageCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setSuggestedUtterances:;
- (BOOL)mutatingCommand;
- (id)guideSnippet;
- (void)setGuideSnippet:;
- (id)guideTag;
- (void)setGuideTag:;
- (id)suggestedUtterances;
+ (id)guideUpdate;
+ (id)guideUpdateWithDictionary:context:;
@end
