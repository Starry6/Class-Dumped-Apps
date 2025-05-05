@interface SAUIDelayedConfirmationView : SAUIConfirmationView
@property (nonatomic) q autoConfirmDelay;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)autoConfirmDelay;
- (void)setAutoConfirmDelay:;
+ (id)delayedConfirmationView;
+ (id)delayedConfirmationViewWithDictionary:context:;
@end
