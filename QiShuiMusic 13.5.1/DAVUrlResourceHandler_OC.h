@interface DAVUrlResourceHandler_OC : DAVResourceHandler_OC
@property (nonatomic) {shared_ptr<davinci::resource::UrlResourceHandler>=^{UrlResourceHandler}^{__shared_weak_count}} internalHandler;
- (id)init;
- (id)initWithHandler:;
@end
