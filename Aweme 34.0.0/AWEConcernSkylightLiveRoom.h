@interface AWEConcernSkylightLiveRoom : NSObject
+ (void)enterRoomWithModel:feedCells:orderIndex:enterFrom:enterMethod:delegate:extraTrackParams:;
+ (BOOL)checkValidWithLiveModel:;
+ (BOOL)hasLiveRoomWithLiveModel:;
@end
