@interface LynxUIMethodProcessor : NSObject
+ (void)extractUIOperationFromComponent:withName:;
+ (id)findUIOperationByComponent:andKey:;
+ (void)invokeMethod:withParams:withResult:forUI:;
@end
