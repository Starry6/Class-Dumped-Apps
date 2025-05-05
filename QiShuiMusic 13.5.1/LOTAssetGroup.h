@interface LOTAssetGroup : NSObject
@property (nonatomic) NSString rootDirectory;
@property (nonatomic) NSBundle assetBundle;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) BOOL ignoreBundleResource;
@property (nonatomic) LOTAnimationView referencedAnimationView;
- (id)assetModelForID:;
- (void)buildAssetNamed:withFramerate:;
- (void)finalizeInitializationWithFramerate:;
- (BOOL)ignoreBundleResource;
- (id)initWithJSON:withAssetBundle:withFramerate:;
- (id)referencedAnimationView;
- (void)setIgnoreBundleResource:;
- (void)setReferencedAnimationView:;
- (void)setRootDirectory:;
- (id)rootDirectory;
- (void)setBaseURL:;
- (id)baseURL;
- (void).cxx_destruct;
- (id)assetBundle;
@end
