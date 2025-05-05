@interface PLAssetsdInnerService : NSObject
- (void)getInnerServiceWithContext:reply:;
- (void)_awaitForRequiredLibraryStateWithContext:completionHandler:;
- (void).cxx_destruct;
- (id)initWithPermissions:requiredLibraryServicesState:lazyService:;
- (id)instantiateInnerService;
@end
