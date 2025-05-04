@interface AWEFeedModuleServiceCommonAdaperDefault : NSObject
- (BOOL)canTrackClientShowInDetailWithAwemeType:params:;
- (id)getLoginViewTitleTextColor;
- (id)getLoginViewSubTitleTextColor;
+ (id)recommendChannelTitle;
+ (id)mediumVideoChannelTitle;
+ (id)toastAppName;
+ (BOOL)shouldMediumVideoObserveDeviceID;
+ (BOOL)isMediumVideoChannelMute;
@end
