@interface AWEPublishInfiniTaskHandler : NSObject
+ (void)logStartPublishInfo:;
+ (void)saveDraftType:flowModel:completion:isBackup:;
+ (BOOL)saveDraftPrepareForExecute:completion:;
+ (id)restorePublishDraftTempProduct:;
+ (BOOL)hideDraftWhenRetry:;
+ (BOOL)enableBackgroundUpload:;
+ (id)taskAssosicatedParams:;
+ (void)syncPublishAfterSynthesisIfNeed:flag:;
+ (void)recordUserFeedback:stage:;
+ (BOOL)hasMergeVideoFile:;
+ (void)publishSuccess:completion:;
+ (void)publishFail:stage:completion:;
+ (void)checkAlbumFrames:isUploadFailed:extra:;
@end
