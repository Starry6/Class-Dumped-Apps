@interface IESLiveDistributionEntranceTrackManager : NSObject
+ (void)trackLiveShow:enterFromMerge:enterMethod:requestId:extraParams:;
+ (BOOL)checkLiveEntranceWithEnterFromMerge:enterMethod:checkTitle:;
+ (id)inviteModeForTrackByBattleSettings:;
+ (id)paramsFromRoom:enterFromMerge:enterMethod:requestId:extraParams:;
+ (void)trackDurationWithEnterFromMerge:enterMethod:duration:extraParams:;
+ (void)trackLiveDuration:enterFromMerge:enterMethod:requestId:duration:extraParams:;
+ (void)trackLiveShowWithEnterFromMerge:enterMethod:extraParams:;
+ (id)viceViewTypeForTrack:;
@end
