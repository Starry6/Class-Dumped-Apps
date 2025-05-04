@interface AWEFlowDebugInfo : NSObject
+ (BOOL)isBOEEnv;
+ (BOOL)isPPEEnv;
+ (id)currentLane;
+ (id)sharedInstance;
@end
