@interface DAVZipResourceHandler_OC : DAVResourceHandler_OC
@property (nonatomic) {shared_ptr<davinci::resource::ZipResourceHandler>=^{ZipResourceHandler}^{__shared_weak_count}} internalHandler;
- (id)init;
- (id)initWithHandler:;
@end
