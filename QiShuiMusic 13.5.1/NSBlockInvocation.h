@interface NSBlockInvocation : NSInvocation
- (SEL)selector;
- (void)setSelector:;
- (void)invokeSuper;
- (void)invoke;
- (void)invokeUsingIMP:;
@end
