@interface IESLiveSaaSPublicScreenABManager : NSObject
- (BOOL)enableMessageListLayoutOptimize;
- (id)messageStyleV2ConfigForAudience;
- (double)foldMsgStayTime;
- (id)audienceLikeAudienceDiggABTest;
- (id)audienceMessageListSlideMaxOffset;
- (BOOL)enableMessageStyleSwitch;
- (id)messageStyleV2ConfigForAnchor;
- (BOOL)messagelistAutomaticHeightForPortrait;
- (id)pinnedDuration;
+ (id)managerWithDIContext:;
@end
