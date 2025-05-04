@interface AWEShowTrackRegister : NSObject
+ (void)registerAllShowTrackerWithParams:attachTo:;
+ (void)registerAllShowTrackerWithParams:attachTo:async:;
+ (BOOL)enableAsyncToTransmissionNode;
+ (id)showTrackerAllEventArray;
+ (id)showTrackerCheckParams;
+ (void)transmissionNodeInfoForEvent:params:attachTo:;
+ (id)showTrackerCheckPublicTrack;
@end
