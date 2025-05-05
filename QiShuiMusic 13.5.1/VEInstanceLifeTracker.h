@interface VEInstanceLifeTracker : NSObject
+ (id)getInstanceOfClass:address:;
+ (id)keyForBridgedPointer:;
+ (id)p_trackerQueue;
+ (void)recordInstanceCreation:;
+ (void)recordInstanceDestruction:;
@end
