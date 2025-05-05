@interface WBSTabDialogCancellationExemption : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithCancellationHandler:;
- (BOOL)isExemptFromCancellationInContext:;
+ (id)provisionalNavigationExemption;
+ (id)committedNavigationExemption;
+ (id)sameOriginNavigationExemption:;
@end
