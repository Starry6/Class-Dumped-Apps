@interface AWEIMGroupSPTaskUtility : NSObject
- (BOOL)isGroupSPAllowed;
- (BOOL)isHitActIDRevert;
- (id)getGameTypeFromTaskType:;
- (BOOL)isRedpacketRainTask:;
- (BOOL)canShowGroupSPEntrance;
- (id)fatalLogInfo;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (BOOL)enableCleanTaskDB;
+ (id)shareContactBtnTitleWithTaskType:;
+ (id)shareContactBtnTitle;
+ (id)shareContactBtnSentTitle;
+ (double)maxDurationForNewTag:;
+ (unsigned long long)maxExposeTimeForNewTag:;
+ (unsigned long long)maxExposeTimeForHotTag;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
