@interface ICEResultWaitQueue : NSObject
- (id)init;
- (void)dealloc;
- (id)copyResultForCallID:;
- (void)addResult:forCallID:;
@end
