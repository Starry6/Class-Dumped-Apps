@interface WKContentRuleListStore : NSObject
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (void)_removeAllContentRuleLists;
- (void)lookUpContentRuleListForIdentifier:completionHandler:;
- (void)compileContentRuleListForIdentifier:encodedContentRuleList:completionHandler:;
- (void)getAvailableContentRuleListIdentifiers:;
- (void)removeContentRuleListForIdentifier:completionHandler:;
- (void)_invalidateContentRuleListVersionForIdentifier:;
- (void)_getContentRuleListSourceForIdentifier:completionHandler:;
- (void)compileContentExtensionForIdentifier:encodedContentExtension:completionHandler:;
- (void)lookupContentExtensionForIdentifier:completionHandler:;
- (void)removeContentExtensionForIdentifier:completionHandler:;
+ (id)defaultStore;
+ (id)storeWithURL:;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURLAndLegacyFilename:;
@end
