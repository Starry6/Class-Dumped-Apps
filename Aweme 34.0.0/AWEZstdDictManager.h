@interface AWEZstdDictManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> process_serial_queue;
- (void)setupTTNetZstdImpl;
- (id)process_serial_queue;
- (void)p_setupTTNetZstdImpl;
- (void)setProcess_serial_queue:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
