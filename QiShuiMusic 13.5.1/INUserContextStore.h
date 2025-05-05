@interface INUserContextStore : NSObject
- (void).cxx_destruct;
- (id)_init;
- (void)storeUserContext:forBundleIdentifier:;
- (void)removeUserContextOfClass:forBundleIdentifier:;
- (void)storeUserContextViaHelper:forBundleIdentifier:;
- (void)userContextOfClass:forBundleIdentifiers:withCompletion:;
- (void)userContextOfClass:withCompletion:;
- (id)_initWithKnowledgeStore:;
+ (id)sharedStore;
+ (id)findDataInValue:;
+ (id)keyPrefixForType:;
+ (id)keyForBundleIdentifier:andType:;
@end
