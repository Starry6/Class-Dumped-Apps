@interface WBSTabDialogCancellationContext : NSObject
@property (nonatomic) NSString reason;
@property (nonatomic) NSDictionary userInfo;
- (id)init;
- (id)userInfo;
- (id)reason;
- (void).cxx_destruct;
- (id)initWithReason:userInfo:;
+ (id)provisionalNavigationContext;
+ (id)tabClosedContext;
+ (id)committedNavigationContextWithURL:;
+ (id)cancellationContextWithReason:userInfo:;
@end
