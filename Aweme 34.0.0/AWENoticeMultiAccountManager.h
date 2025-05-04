@interface AWENoticeMultiAccountManager : NSObject
@property (nonatomic) AWEMultiAccountNoticeResponseModel latestMultiAccountNoticesModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)updateMultiAccountNoticeIfNeed;
- (long long)latestMultiAccountNoticeUnreadCount;
- (BOOL)canRequestMultiAccountNoticeUnreadCount;
- (void)recordMultiAccountNoticeUnreadCountRequestTimeInterval;
- (void)resetMultiAccountNoticeUnreadCountRequestTimeInterval;
- (BOOL)shouldShowMultiAccountNoticeDot;
- (BOOL)multiAccountExitStrategyShouldHideDot;
- (void)setMultiAccountExitStrategyShouldHideDot:isForStrategyOne:;
- (void)trackAccountMessageNoticeShowWithCount:dotType:isForce:;
- (id)latestMultiAccountNotices;
- (void)getMultiAccountNoticesUnreadCountWithCompletion:;
- (id)multiAccountNoticesConfigsModel;
- (long long)totalUnreadCountForMultiAccountNotices:;
- (void)setLatestMultiAccountNoticesModel:;
- (id)latestMultiAccountNoticesModel;
- (id)p_multiAccountExitStrategyTwoShouldHideDotKey;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
