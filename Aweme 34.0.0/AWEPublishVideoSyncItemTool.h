@interface AWEPublishVideoSyncItemTool : NSObject
+ (long long)isDxXiguaSyncStep2;
+ (void)updateFinalVideoSyncV2Model:toPublishModel:;
+ (BOOL)isPrivacyVideoSyncCell:;
+ (BOOL)isEnableNewVideoSync:;
+ (BOOL)shouldShowXiguaAutoSync:;
+ (BOOL)shouldShowXiguaSync:;
+ (BOOL)shouldShowUlikeSync:;
+ (BOOL)enableSyncEntranceOptWithPublishModel:;
+ (BOOL)isVideoPublishCanShowVideoSync:;
+ (long long)minFansCountAtPublishPage;
+ (BOOL)hasEverAppSyncSelected:;
+ (id)videoSyncModelFromPublishViewModel:;
+ (void)dealWithCreateAwemeParams:model:;
+ (id)localRepoVideoSyncModelFromCache;
+ (BOOL)isPublishModelAvailableForSync:;
@end
