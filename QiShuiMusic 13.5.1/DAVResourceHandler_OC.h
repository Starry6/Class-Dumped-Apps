@interface DAVResourceHandler_OC : NSObject
@property (nonatomic) {shared_ptr<davinci::resource::DAVResourceHandler>=^{DAVResourceHandler}^{__shared_weak_count}} internalHandler;
- (id)internalHandler;
- (BOOL)canHandleWithResource:;
- (void)fetchWithResource:extraParams:progress:completion:;
- (id)getResourceFromCacheWithResourceId:extraParams:;
- (void)setInternalHandler:;
- (id)initWithHandler:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
