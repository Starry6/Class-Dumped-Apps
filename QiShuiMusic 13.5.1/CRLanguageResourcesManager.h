@interface CRLanguageResourcesManager : NSObject
@property (nonatomic) NSMutableDictionary languageResourceStacks;
@property (nonatomic) q resourceType;
- (long long)resourceType;
- (void)setResourceType:;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)addSubscriber:forLocale:;
- (void)removeSubscriber:forLocale:;
- (void)subscriber:willDeactivateForLocale:;
- (BOOL)lockResourcesForLocale:sender:block:;
- (id)languageResourceStacks;
- (void)setLanguageResourceStacks:;
+ (id)sharedManager;
+ (id)postProcessManager;
+ (id)lineWrappingManager;
@end
