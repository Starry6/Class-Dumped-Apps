@interface AWEProfileEditFlowTracker : NSObject
+ (void)trackEditProfileEvent:context:extraParams:;
+ (void)trackProfileFlowEventType:flowType:multiFlowType:context:;
+ (id)enterMethodForScene:;
@end
