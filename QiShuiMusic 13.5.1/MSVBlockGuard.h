@interface MSVBlockGuard : NSObject
- (void)_interruptWithReason:;
- (id)init;
- (void)dealloc;
- (BOOL)disarm;
- (id)initWithTimeout:;
- (void).cxx_destruct;
- (id)initWithTimeout:interruptionHandler:;
- (id)initWithDeallocHandler:;
@end
