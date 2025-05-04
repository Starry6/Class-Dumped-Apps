@interface AWELocallyPrivacyManager : NSObject
@property (nonatomic) BOOL isFetchedPrivacySettings;
@property (nonatomic) BOOL fetchingPrivacySettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)setIsFetchedPrivacySettings:;
- (BOOL)isFetchedPrivacySettings;
- (BOOL)fetchingPrivacySettings;
- (void)setFetchingPrivacySettings:;
- (id)init;
- (void)dealloc;
+ (void)showLocallyPrivacyToast:notShownBlock:;
+ (BOOL)__isSameCityCode:;
+ (BOOL)__didMeetFrequencyControl;
+ (BOOL)displayedToast;
+ (BOOL)shouldShowLocallyPrivacyWithModel:;
+ (id)toastMessage;
+ (void)markDisplayed;
+ (void)fetchPrivacySettingsInfoWithCompleted:;
+ (id)__dateMark;
+ (void)__clearMarkCaches;
+ (id)sharedInstance;
@end
