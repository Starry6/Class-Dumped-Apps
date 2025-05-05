@interface VSWaitGroup : NSObject
- (id)init;
- (BOOL)wait;
- (void)enter;
- (void).cxx_destruct;
- (void)leave;
- (BOOL)waitWithMilliseconds:;
@end
