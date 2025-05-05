@interface DAVResourceManager_OC : NSObject
@property (nonatomic) NSMutableArray handlers;
@property (nonatomic) {shared_ptr<davinci::resource::DAVResourceManager>=^{DAVResourceManager}^{__shared_weak_count}} internalResourceManager;
- (void)fetchWithResource:extraParams:progress:completion:;
- (id)getResourceFromCacheWithResourceId:extraParams:;
- (id)internalResourceManager;
- (void)registerResourceHandler:;
- (void)setInternalResourceManager:;
- (id)handlers;
- (void)setHandlers:;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)getDefaultResourceManager;
@end
