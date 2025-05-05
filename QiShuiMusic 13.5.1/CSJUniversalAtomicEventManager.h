@interface CSJUniversalAtomicEventManager : NSObject
+ (id)createSlotContextWithMaterial:eventContext:;
+ (void)deeplinkWithParams:context:eventAction:;
+ (void)downloadAppWithParams:context:eventAction:;
+ (void)downloadTrackerWithActionType:material:tag:;
+ (id)handleSourceWithParams:;
+ (void)landingPageWithParams:context:eventAction:;
+ (void)livePreProccessWithParams:context:eventAction:;
+ (void)openPolicyWithParams:context:eventAction:;
+ (void)wcMiniappWithParams:context:eventAction:;
@end
