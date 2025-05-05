@interface EspressoNetwork : NSObject
@property (nonatomic) {shared_ptr<Espresso::net>=^{net}^{__shared_weak_count}} net;
@property (nonatomic) Q layers_size;
@property (nonatomic) EspressoContext ctx;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)ctx;
- (id)net;
- (id)initWithJSFile:context:computePath:;
- (id)initWithJSFile:binSerializerId:context:computePath:;
- (unsigned long long)layers_size;
- (void)wipe_layers_blobs;
@end
