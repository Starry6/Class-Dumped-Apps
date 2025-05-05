@interface IESLiveSaaSSlideRoomABManager : NSObject
- (BOOL)enableAudienceVCUseFrame;
- (BOOL)enableSlidePreloadOptimize;
+ (id)managerWithDIContext:;
@end
