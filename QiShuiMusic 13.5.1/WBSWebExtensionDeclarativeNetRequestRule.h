@interface WBSWebExtensionDeclarativeNetRequestRule : NSObject
@property (nonatomic) q ruleID;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary action;
@property (nonatomic) NSDictionary condition;
@property (nonatomic) NSArray ruleInWebKitFormat;
- (id)condition;
- (id)action;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (long long)priority;
- (long long)ruleID;
- (id)initWithDictionary:errorString:;
- (void)removeInvalidResourceTypesForKey:;
- (id)ruleInWebKitFormat;
- (id)_convertedRulesForWebKitActionType:chromeActionType:;
- (id)_webKitRuleWithWebKitActionType:chromeActionType:chromeResourceTypes:;
- (id)_chromeResourceTypeToWebKitLoadContext;
- (id)_chromeDomainTypeToWebKitDomainType;
- (id)_chromeResourceTypeToWebKitResourceType;
- (id)_resourcesToTargetWhenNoneAreSpecifiedInRule;
- (id)_allChromeResourceTypes;
- (id)_convertedResourceTypesForChromeResourceTypes:;
- (id)_regexURLFilterForChromeURLFilter:;
@end
