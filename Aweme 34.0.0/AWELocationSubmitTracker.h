@interface AWELocationSubmitTracker : NSObject
@property (nonatomic) q videoPlayMaxCount;
@property (nonatomic) BOOL locationSubmitIsOn;
@property (nonatomic) BOOL needAppPopup;
@property (nonatomic) BOOL currentVideoIsAds;
@property (nonatomic) BOOL alertViewIsOn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)p_ifLocationAlertShowed;
- (BOOL)p_ifSystemLocationAlertShowed;
- (void)setCurrentVideoIsAds:;
- (BOOL)currentVideoIsAds;
- (BOOL)needAppPopup;
- (void)showLocationAlert;
- (void)showSystemLocationAlert;
- (void)p_setLocationAlertShowed;
- (void)setAlertViewIsOn:;
- (void)p_setSystemLocationAlertShowed;
- (void)addVideoPlayedCount:isAds:;
- (BOOL)userHasAuthrizedLocation;
- (BOOL)alertViewIsOn;
- (long long)videoPlayMaxCount;
- (void)setVideoPlayMaxCount:;
- (BOOL)locationSubmitIsOn;
- (void)setLocationSubmitIsOn:;
- (void)setNeedAppPopup:;
- (id)init;
+ (id)sharedInstance;
@end
