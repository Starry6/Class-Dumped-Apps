@interface IESECStoreISVDynamicComponentLoader : NSObject
- (void)componentWithURL:version:completionHandler:;
- (void)downloadComponentWithURL:requestKey:;
- (void)preloadComponentWithURL:version:completionHandler:;
- (void).cxx_destruct;
+ (id)sharedLoader;
@end
