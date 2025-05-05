@interface WBSHostTabProviderManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)providerForContentUUID:;
- (void)registerHostTab:;
- (void)unregisterHostTab:;
- (id)_hostTabForContentUUID:;
+ (id)sharedManager;
@end
