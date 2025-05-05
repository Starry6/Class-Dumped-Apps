@interface WBSWebExtensionWebAccessibleResources : NSObject
@property (nonatomic) NSArray matchPatternStrings;
@property (nonatomic) NSArray resourceNames;
- (void).cxx_destruct;
- (id)initWithManifestV3Dictionary:errorStrings:matchPatternException:;
- (id)initWithManifestV2Array:errorString:;
- (id)_regexStringFromPath:;
- (void)_populateWebAccessibleResources:errorStrings:;
- (id)matchPatternStrings;
- (id)resourceNames;
@end
