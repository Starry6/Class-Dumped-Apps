@interface VKTimer : NSObject
@property (nonatomic) double nextFireDate;
- (void)disable;
- (id)initWithTarget:selector:queue:;
- (void)dealloc;
- (double)nextFireDate;
- (void)fireAfter:;
- (void).cxx_destruct;
- (void)invalidate;
@end
