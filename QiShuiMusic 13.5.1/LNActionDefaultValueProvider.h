@interface LNActionDefaultValueProvider : NSObject
@property (nonatomic) LNActionMetadata actionMetadata;
@property (nonatomic) LNFullyQualifiedActionIdentifier actionIdentifier;
- (void)loadDefaultValuesWithCompletionHandler:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionMetadata;
- (void)setActionMetadata:;
- (id)initWithActionIdentifier:actionMetadata:;
- (id)loadStaticDefaultValueForBundleIdentifier:error:;
- (void)loadSuggestedFocusActionsWithSuggestionContext:completion:;
- (id)loadActionMetadataWithError:;
@end
