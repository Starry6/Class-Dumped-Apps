@interface BYXPCActivity : NSObject
@property (nonatomic) NSObject<OS_xpc_object> underlyingActivity;
@property (nonatomic) NSObject<OS_xpc_object> xpcActivity;
@property (nonatomic) NSObject<OS_xpc_object> criteria;
- (void)setCriteria:;
- (id)criteria;
- (BOOL)shouldDefer;
- (BOOL)setState:;
- (void)setXpcActivity:;
- (id)xpcActivity;
- (long long)state;
- (void).cxx_destruct;
- (BOOL)setCompletionStatus:;
- (id)underlyingActivity;
- (void)setUnderlyingActivity:;
+ (id)activityWithXPCActivity:;
@end
