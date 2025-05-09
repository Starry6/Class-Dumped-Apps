@interface AWEFeedIPhoneAutoPlayManager : NSObject
@property (nonatomic) NSDictionary settingDic;
@property (nonatomic) NSMutableArray recentlyPlayItemIDs;
@property (nonatomic) NSInteger continuousDeclineCount;
@property (nonatomic) NSArray canOpenPageDic;
@property (nonatomic) BOOL autoPlayOpen;
@property (nonatomic) BOOL pictureInPictureOpen;
@property (nonatomic) Q guideStrategy;
@property (nonatomic) NSInteger liveStandingSecond;
@property (nonatomic) NSInteger commerceStandingSecond;
@property (nonatomic) NSInteger cardStandingSecond;
@property (nonatomic) BOOL enableOpenGuideBottomNotification;
@property (nonatomic) NSString openGuideBottomNotificationText;
@property (nonatomic) BOOL enablePictureInPicture;
@property (nonatomic) BOOL enableDeviceStationaryDetection;
@property (nonatomic) q deviceStationaryDetectionThreshold;
@property (nonatomic) double deviceStationaryDetectSensitivity;
@property (nonatomic) q deviceStationaryDetectInterval;
@property (nonatomic) BOOL enablePauseWhenScrollToNext;
@property (nonatomic) BOOL hasBeenOpened;
@property (nonatomic) BOOL canShowOpenGuideBottomNotification;
@property (nonatomic) BOOL didShowOpenGuide;
@property (nonatomic) BOOL didShowOpenGuideBottomNotification;
@property (nonatomic) BOOL didShowCloseGuide;
@property (nonatomic) BOOL didManualCloseOpenGuideBottomNotification;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)getFeedIphoneAutoPlayState;
- (BOOL)isAutoPlayOpen;
- (void)setFeedIphoneAutoPlayState:;
- (BOOL)autoPlayEnableWithReferString:;
- (long long)feedAutoPlayStyle;
- (int)commerceStandingSecond;
- (BOOL)autoPlayEnable;
- (BOOL)enablePictureInPicture;
- (BOOL)enablePauseWhenScrollToNext;
- (unsigned long long)guideStrategy;
- (BOOL)showCloseGiudeIfNeed:isUserDrag:referString:;
- (void)setDidShowCloseGuide:;
- (BOOL)canShowOpenGuideBottomNotification;
- (id)openGuideBottomNotificationText;
- (void)setDidShowOpenGuideBottomNotification:;
- (void)setDidManualCloseOpenGuideBottomNotification:;
- (BOOL)enableDeviceStationaryDetection;
- (long long)deviceStationaryDetectInterval;
- (double)deviceStationaryDetectSensitivity;
- (long long)deviceStationaryDetectionThreshold;
- (int)liveStandingSecond;
- (int)cardStandingSecond;
- (void)initializeAutoPlayState;
- (BOOL)inherentStateIfNeed;
- (BOOL)getLastAutoPlayState;
- (BOOL)pictureInPictureOpen;
- (void)setPictureInPicture:;
- (void)setHasBeenOpened:;
- (void)saveAutoPlayState;
- (void)setAutoPlayOpen:;
- (BOOL)didShowCloseGuide;
- (id)recentlyPlayItemIDs;
- (int)continuousDeclineCount;
- (void)setContinuousDeclineCount:;
- (id)canOpenPageDic;
- (long long)openGuideBottomNotificationIntervalHour;
- (BOOL)isExpiredForHour:timestamp:;
- (BOOL)enableOpenGuideBottomNotification;
- (BOOL)hasBeenOpened;
- (BOOL)didManualCloseOpenGuideBottomNotification;
- (BOOL)didShowOpenGuideBottomNotification;
- (BOOL)homepageMediumEnable;
- (id)settingDic;
- (long long)longPressPanelOrder;
- (void)setPictureInPictureOpen:;
- (void)resetContinuousDeclineCount;
- (void)setDidShowOpenGuide:;
- (BOOL)didShowOpenGuide;
- (void)setGuideStrategy:;
- (void)setSettingDic:;
- (void)setRecentlyPlayItemIDs:;
- (void)setCanOpenPageDic:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
