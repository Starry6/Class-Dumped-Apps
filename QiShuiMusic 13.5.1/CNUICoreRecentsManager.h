@interface CNUICoreRecentsManager : NSObject
@property (nonatomic) CRRecentContactsLibrary recentsLibrary;
@property (nonatomic) <CNScheduler> workQueue;
- (id)workQueue;
- (void).cxx_destruct;
- (id)recentContactsMatchingAllPropertiesOfContact:;
- (id)recentContactsMatchingContactProperties:;
- (void)removeRecents:completionHandler:;
- (void)removeRecentsWithIdentifiers:domain:completionHandler:;
- (id)initWithRecentsLibrary:schedulerProvider:;
- (id)sortedRecentHandlesMatchingAllPropertiesOfContact:;
- (id)recentsContactsMatchingHandles:;
- (id)recentsContactsMatchingHandles:sorted:;
- (id)recentsLibrary;
+ (id)descriptorForRequiredKeys;
+ (id)queryForHandles:;
+ (id)allHandlesToSearchForFromContact:;
+ (id)handlesForContactProperties:;
+ (id)queryForHandles:sorted:;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;
+ (id)supportedPropertyDescriptions;
+ (id)transformForPropertyDescription:;
@end
