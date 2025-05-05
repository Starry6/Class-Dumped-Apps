@interface AMSOpenActionResult : NSObject
@property (nonatomic) AMSURLAction action;
@property (nonatomic) BOOL engagementPresented;
@property (nonatomic) BOOL interruptionResult;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (BOOL)engagementPresented;
- (void)setEngagementPresented:;
- (BOOL)interruptionResult;
- (void)setInterruptionResult:;
@end
