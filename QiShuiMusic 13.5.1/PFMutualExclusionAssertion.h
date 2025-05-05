@interface PFMutualExclusionAssertion : NSObject
- (void)enterCriticalSection;
- (void)leaveCriticalSection;
- (void)performCriticalSection:;
@end
