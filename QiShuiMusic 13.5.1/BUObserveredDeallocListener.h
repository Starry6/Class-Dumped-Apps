@interface BUObserveredDeallocListener : NSObject
- (id)initWithObserveredObject:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addProxy:;
@end
