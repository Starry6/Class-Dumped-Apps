@interface BDUGLuckyDogDialogSideChainTracker : NSObject
@property (nonatomic) BDUGLuckyDogSideChainTracker sideChainTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onActivateCachedTrackedPopupEnd;
- (void)__cleanCache;
- (BOOL)__isDialogTrackerEnable;
- (void)__setupTracker;
- (void)activateButNotInitCachedTrackedPopup:;
- (void)activateCachedTrackedPopup:popupInfo:;
- (void)sendTrackerEventWithIdentity:reasonMap:objInfo:extraInfo:;
- (void)setSideChainTracker:;
- (id)sideChainTracker;
- (void)staticSettingPopUpDate;
- (void)stopTrackingPopupWithPopupId:reason:popupInfo:;
- (void)trackNewPopupWithPopupId:popupInfo:;
- (void)updatePopupReasonWithPopupId:reason:popupInfo:;
- (void)updatePopupStatusWithPopupId:status:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
+ (void)onCleanCache;
+ (void)preStartupModule;
+ (id)sharedInstance;
+ (id)moduleName;
@end
