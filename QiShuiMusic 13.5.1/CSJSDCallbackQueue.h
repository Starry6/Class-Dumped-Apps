@interface CSJSDCallbackQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q policy;
- (void)sync:;
- (void)setPolicy:;
- (unsigned long long)policy;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:;
- (void)setQueue:;
- (id)queue;
- (void)async:;
+ (id)globalQueue;
+ (id)mainQueue;
+ (id)currentQueue;
@end
