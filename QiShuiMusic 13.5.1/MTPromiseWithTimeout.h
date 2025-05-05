@interface MTPromiseWithTimeout : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) MTPromise promise;
@property (nonatomic) NSObject<OS_dispatch_source> dispatchSourceTimer;
- (id)startDate;
- (void)dealloc;
- (void)setStartDate:;
- (void)finishWithResult:;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
- (id)initWithTimeout:queue:timeoutBlock:;
- (id)dispatchSourceTimer;
- (void)setDispatchSourceTimer:;
@end
