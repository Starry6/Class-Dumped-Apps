@interface AWEPluginVideoPublishUtils : NSObject
+ (id)generateVideoPublishParams:;
+ (unsigned long long)getVideoPermissionAB:;
+ (BOOL)shouldReplaceAnchorMessage:;
+ (double)validScale:;
+ (double)validScaleWeb:;
+ (id)anchorInfoWithModel:uniqueID:;
+ (id)generateAWEStudioTaskInfo:uniqueID:;
+ (void)addStickersTo:model:stickerSettings:;
+ (void)handleUserInfoAndTitleWithModel:editComposer:titleSettings:AWEStudioTaskInfo:;
+ (double)validTime:start:duration:;
+ (BOOL)isValidLocationX:Y:;
+ (double)validImageScale:;
+ (void)addAtUsersToAWEStudioTaskInfo:model:;
+ (void)addTitleTo:model:titleSettings:;
+ (BOOL)isValidLocation:;
@end
