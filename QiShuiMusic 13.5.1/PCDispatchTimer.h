@interface PCDispatchTimer : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSDate fireDate;
- (void)dealloc;
- (void)start;
- (void)setFireDate:;
- (id)initWithQueue:target:selector:fireTime:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)_cleanupTimer;
- (id)fireDate;
- (void)_callTarget;
- (void)invalidate;
@end
