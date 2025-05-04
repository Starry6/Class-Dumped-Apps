@interface AWEFollowYellowDotTrack : NSObject
+ (void)trackClickYellowDotAndRequestFollowDataWithIsFromSort:;
+ (double)getReceivePushTimeInterval;
+ (void)trackReceivePushEnterFollowFeedWithParams:;
+ (void)setReceivePushTimeInterval:;
+ (void)trackConsumeFollowYellowDotWithParmas:;
+ (void)trackReceiveFollowTabNotices;
+ (void)trackFollowNoticeExtraWithScene:params:;
+ (void)trackSocialCountRequestResult:source:;
@end
