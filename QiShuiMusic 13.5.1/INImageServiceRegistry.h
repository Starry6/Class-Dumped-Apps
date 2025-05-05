@interface INImageServiceRegistry : NSObject
@property (nonatomic) NSArray imageLoaders;
@property (nonatomic) NSArray imageStorageServices;
@property (nonatomic) NSArray imageServices;
- (id)init;
- (id)imageServiceForServiceIdentifier:;
- (void)registerImageService:;
- (id)imageLoaderForServiceIdentifier:;
- (void)_reprioritizeImageServices;
- (id)imageServices;
- (void)unregisterImageService:;
- (void).cxx_destruct;
- (id)imageStorageServices;
- (id)imageLoaders;
- (id)imageStorageServiceForServiceIdentifier:;
+ (id)sharedInstance;
@end
