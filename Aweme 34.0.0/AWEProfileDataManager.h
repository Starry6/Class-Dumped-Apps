@interface AWEProfileDataManager : NSObject
+ (void)showOneDayWithUser:completion:;
+ (void)hideOneDayWithUser:completion:;
+ (void)getUserProfileFrequencyInfoWithCompletion:;
+ (void)getUserProfileWithID:completion:;
+ (void)getUserProfileWithID:detailCompletion:;
+ (void)getUserProfileWithID:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserProfileWithID:secUid:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserIDInfoWithUniqueID:completion:;
+ (void)checkStarHitRankNoticeWithStarUID:completion:;
+ (id)getExpectedSizeInfo;
+ (void)getUserProfileWithID:cacheStrategy:cacheMaxAge:detailCompletion:;
+ (id)sourceParam;
+ (BOOL)needPublishVideoStrategyParameter;
+ (BOOL)needRequestPvParams;
+ (void)turnOnPostNotificationWithUserID:completion:;
+ (void)turnOffPostNotificationWithUserID:completion:;
+ (void)setRemarkNameWithUserID:remarkName:params:completion:;
@end
