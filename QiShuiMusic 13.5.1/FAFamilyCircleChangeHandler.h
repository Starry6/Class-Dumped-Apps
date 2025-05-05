@interface FAFamilyCircleChangeHandler : NSObject
+ (void)handleURLResponse:;
+ (void)handleDidRepairFamilyWithCompletion:;
+ (void)handleDidSetupFamilyWithCompletion:;
+ (void)_refetchFamilyWithContext:completion:;
@end
