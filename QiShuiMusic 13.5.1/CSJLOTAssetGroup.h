@interface CSJLOTAssetGroup : NSObject
@property (nonatomic) NSString rootDirectory;
@property (nonatomic) NSBundle assetBundle;
- (id)assetModelForID:;
- (void)buildAssetNamed:withFramerate:;
- (void)finalizeInitializationWithFramerate:;
- (id)initWithJSON:withAssetBundle:withFramerate:;
- (void)setRootDirectory:;
- (id)rootDirectory;
- (void).cxx_destruct;
- (id)assetBundle;
@end
