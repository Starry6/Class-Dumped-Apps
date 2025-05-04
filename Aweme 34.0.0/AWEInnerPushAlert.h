@interface AWEInnerPushAlert : AWEInnerPushAlertBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (BOOL)isEqualToAlert:;
- (void)showWithContext:callbackWrapper:;
- (void)onAlertCanceledWithContext:;
- (id)mr_accessIDForEvent:;
@end
