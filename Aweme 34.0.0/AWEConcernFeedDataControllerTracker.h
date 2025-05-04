@interface AWEConcernFeedDataControllerTracker : NSObject
+ (void)trackError:;
+ (void)trackAccuracyCheckWithNoticeType:response:;
+ (void)trackResponseWithYellowDot:;
+ (void)trackFollowChannelWithNewItemCount:newRoomCount:logPb:;
+ (void)monitorEmptyFeedWithResponse:isFilterEmpty:error:;
+ (void)trackDeleteDuplicatedItems:requestID:;
+ (void)trackResponseWithPushIfNeed:;
+ (id)noticeCountLaunchParam;
@end
