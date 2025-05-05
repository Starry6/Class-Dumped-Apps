@interface ZOMTTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> zoautimer;
@property (nonatomic) double zoautimeout;
@property (nonatomic) @? zoaucompletion;
@property (nonatomic) NSObject<OS_dispatch_queue> zoauqueue;
- (void)setZoautimeout:;
- (id)initWithTimeout:repeat:completion:queue:;
- (void)setZoaucompletion:;
- (void)setZoauqueue:;
- (void)setZoautimer:;
- (id)zoaucompletion;
- (id)zoauqueue;
- (double)zoautimeout;
- (id)zoautimer;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)invalidate;
@end
