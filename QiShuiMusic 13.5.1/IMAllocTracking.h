@interface IMAllocTracking : NSObject
- (void)dealloc;
- (id)release;
- (id)retain;
- (void)_registerCallstack;
@end
