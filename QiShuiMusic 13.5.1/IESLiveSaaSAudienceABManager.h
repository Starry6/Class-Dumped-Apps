@interface IESLiveSaaSAudienceABManager : NSObject
- (id)audienceBackrecordDelaySeconds;
- (id)audienceBackrecordSeconds;
- (long long)audienceMessageListSlideInteractionCase;
- (BOOL)enableAllNewStyle;
- (BOOL)enableBackRecord;
- (BOOL)enableBackRecordAppend;
- (BOOL)enableEnchorMessageListNewUI;
- (BOOL)enableExitPlay;
- (BOOL)enableMergeAudienceVCLifeCycleMethod;
- (BOOL)enableMessageListShakeFix;
- (BOOL)enableMultiCamera;
- (BOOL)enablePKSmartAdjustFrameV2;
- (BOOL)enableReloadWithRoom;
- (BOOL)enableSlidePreloadOptimize;
- (BOOL)enableTerminateShowDurationEvent;
- (BOOL)enableToolbarNewStyleNumber;
- (BOOL)liveEnableStreamPlayerStopWhenCancelPreload;
- (double)livePkInteractionExternalPlaceHeight;
- (id)livePlayerViewLayoutConfig;
- (id)vsMergeLinkedRoomsSchema;
+ (id)managerWithDIContext:;
@end
