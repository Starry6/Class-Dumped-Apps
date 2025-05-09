@interface AWENotificationPermissionDataManager : NSObject
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSDictionary pushClickTrackInfo;
@property (nonatomic) BOOL closedNoticeBar;
@property (nonatomic) BOOL canShowFromPsort;
@property (nonatomic) BOOL hasRequestedPsort;
@property (nonatomic) BOOL isRequestingPsort;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString token;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString actvityId;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)pushClickTrackInfo;
- (void)setPushClickTrackInfo:;
- (id)__trackPushClickInfoWithPayload:;
- (BOOL)closedNoticeBar;
- (BOOL)hasRequestedPsort;
- (BOOL)canShowFromPsort;
- (BOOL)isRequestingPsort;
- (void)setIsRequestingPsort:;
- (void)setCanShowFromPsort:;
- (void)setActvityId:;
- (void)setHasRequestedPsort:;
- (void)setClosedNoticeBar:;
- (void)requestShowBottomBar:referString:;
- (void)closeNotificationPermissionBar;
- (id)actvityId;
- (id)schema;
- (void)setGroupID:;
- (void)setSchema:;
- (id)groupID;
- (void)setTitleText:;
- (id)titleText;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)taskId;
- (void)setButtonText:;
- (void)setTaskId:;
- (void)setToast:;
- (id)toast;
+ (id)sharedManager;
@end
