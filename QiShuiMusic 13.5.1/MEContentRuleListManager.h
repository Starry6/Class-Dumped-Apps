@interface MEContentRuleListManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)extensionsMatched:;
- (void)extensionsNoLongerMatching:;
- (id)initWithExtensionsController:;
- (id)addObserver:activeRuleLists:;
- (id)_activeRuleLists;
- (void)_handleExtensionsAdded:;
- (void)_handleExtensionsRemoved:;
- (void)_compileAndAddContentRuleListForIdentifier:encodedContentRuleList:;
- (id)_encodedContentRuleListForExtension:;
- (void)_notifyObserversOfNewContentRuleList:;
- (void)_notifyObserversOfUpdatedContentRuleList:oldContentRuleList:;
- (void)_notifyObserversOfRemovedContentRuleList:;
- (void)_scheduleContentRuleListReload;
- (void)_reloadContentRuleLists;
+ (id)log;
@end
