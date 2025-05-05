@interface DOCPostLaunchBuffer : DOCOperationBuffer
- (id)initWithLabel:targetQueue:;
- (void)performAfterLaunch:;
- (void)performAfterLaunchAlwaysAsync:block:;
+ (id)shared;
@end
