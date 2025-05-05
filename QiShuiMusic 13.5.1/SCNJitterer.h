@interface SCNJitterer : NSObject
@property (nonatomic) BOOL enabled;
- (void)dealloc;
- (void)jitter;
- (void)setEnabled:;
- (void)restart;
- (void)update;
- (id)initWithDelegate:;
- (BOOL)isEnabled;
- (void)delegateWillDie;
- (BOOL)isAborting;
- (void)stopIfNeeded;
@end
