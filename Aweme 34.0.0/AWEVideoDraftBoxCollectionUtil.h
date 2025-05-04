@interface AWEVideoDraftBoxCollectionUtil : NSObject
+ (void)uploadDrafts:container:completion:;
+ (void)alertFeedbackWithCallback:;
+ (BOOL)draftBoxCacheCleanTipsOptimize;
+ (long long)draftBoxCacheCleanTipsOptimizeMaxDeviceSizeGB;
+ (long long)draftBoxCacheCleanTipsShowCount;
+ (long long)draftBoxCacheCleanTipsOptimizeMinDraftSizeMB;
+ (BOOL)draftBoxCacheSensitiveUserTips;
+ (long long)draftBoxCacheSensitiveUserTipsMinDraftSizeMB;
+ (long long)draftBoxCacheCleanTipsCloseDays;
+ (long long)draftBoxCacheCleanTipsHideDays;
+ (id)getAWEColorWithColorName:vc:;
+ (id)getACCColorWithColorName:vc:;
+ (id)managerButtonTitleKey;
+ (void)handleDraftsSaveLocalSuccessAlertWithDrafts:selectedDraftSize:callback:;
+ (id)selectedInProgressTaskDraftIdsWithDrafts:;
+ (void)p_uploadMonitorWithDrafts:error:;
+ (id)draftBoxPromptShowConfig;
+ (id)draftBoxPromptConfig1;
+ (id)draftBoxPromptConfig2;
+ (void)handleDeleteDraftsAlertWithDrafts:selectedDraftSize:callback:;
+ (void)alertPartialDamagedWithCallback:;
+ (long long)maxFeedbackCount;
+ (BOOL)feedbackEnabled;
+ (id)cellSize;
+ (double)cellSpacing;
+ (double)footerViewHeight;
@end
