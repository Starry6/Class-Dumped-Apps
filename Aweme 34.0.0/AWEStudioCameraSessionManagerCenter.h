@interface AWEStudioCameraSessionManagerCenter : NSObject
- (void)cleanWithCameraSessionManager:;
- (id)getCameraSessionManagerWithUseMutex:useWeakSubscription:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
