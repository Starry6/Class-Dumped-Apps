@interface ASDPromiseObserver : NSObject
- (id)initWithValueBlock:errorBlock:scheduler:;
- (void)notifyRejectedWithError:;
- (void).cxx_destruct;
- (void)notifyResolvedWithValue:;
@end
