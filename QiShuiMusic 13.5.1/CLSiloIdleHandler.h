@interface CLSiloIdleHandler : NSObject
@property (nonatomic) @? onIdle;
@property (nonatomic) @? onResume;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdleHandler:onResume:;
- (id)onIdle;
- (void)setOnIdle:;
- (id)onResume;
- (void)setOnResume:;
@end
