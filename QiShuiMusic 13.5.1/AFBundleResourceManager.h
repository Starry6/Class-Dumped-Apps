@interface AFBundleResourceManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)resourceForSoundID:;
- (id)URLForResource:;
- (id)URLForSoundID:;
+ (id)sharedManager;
@end
