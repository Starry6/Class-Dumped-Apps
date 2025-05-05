@interface AFKeyValueObservingDeliveryOptions : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) I qosClass;
@property (nonatomic) BOOL asynchronous;
- (unsigned int)qosClass;
- (void).cxx_destruct;
- (id)queue;
- (BOOL)asynchronous;
- (id)initWithQueue:qosClass:asynchronous:;
@end
