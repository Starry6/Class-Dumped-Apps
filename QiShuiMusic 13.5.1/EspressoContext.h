@interface EspressoContext : NSObject
@property (nonatomic) {shared_ptr<Espresso::abstract_context>=^{abstract_context}^{__shared_weak_count}} ctx;
@property (nonatomic) NSInteger platform;
- (id)initWithPlatform:;
- (id)initWithContext:;
- (int)platform;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)ctx;
- (id)initWithDevice:andWisdomParams:;
- (id)initWithNetworkContext:;
- (void)set_priority:low_priority_max_ms_per_command_buffer:gpu_priority:;
@end
