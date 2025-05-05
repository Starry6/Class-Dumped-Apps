@interface BDTrackBaseRealtimeSendingManager : NSObject
+ (void)sendingData:index:priority:;
+ (void)sendingOnlyBackgroundSceneDataImmediatelyWithTerminateData:completion:;
+ (id)urlWithIndex:;
@end
