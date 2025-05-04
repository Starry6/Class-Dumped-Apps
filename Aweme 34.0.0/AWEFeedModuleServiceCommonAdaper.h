@interface AWEFeedModuleServiceCommonAdaper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canTrackClientShowInDetailWithAwemeType:params:;
- (id)getLoginViewTitleTextColor;
- (id)getLoginViewSubTitleTextColor;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (id)recommendChannelTitle;
+ (id)mediumVideoChannelTitle;
+ (id)toastAppName;
+ (BOOL)shouldMediumVideoObserveDeviceID;
+ (BOOL)isMediumVideoChannelMute;
@end
