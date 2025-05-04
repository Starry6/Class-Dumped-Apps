@interface AWEFamiliarColdLaunchLandingManager : NSObject
@property (nonatomic) BOOL hasShowedMaskView;
@property (nonatomic) BOOL isShowingMaskView;
@property (nonatomic) BOOL quicklySlideGuideMaskHasShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appWillTerminate;
- (void)addPitayaLandingVideoPlayTrackParamsTo:;
- (void)maskViewInFeedCellDidDismiss;
- (void)clearHasShowedMaskView;
- (void)recordEnterFriendsTabInAppCycle;
- (BOOL)isNeverEnterFriendsTabInAppCycle;
- (BOOL)isShowingMaskView;
- (void)setHasShowedMaskView:;
- (void)setIsShowingMaskView:;
- (void)setQuicklySlideGuideMaskHasShowed:;
- (void)p_recordFamiliarLandingUnreadNumInfo;
- (void)maskViewInFeedCellDidShow;
- (void)quicklySwipeGuideMaskHasShowed;
- (BOOL)hasShowedMaskView;
- (long long)getFamiliarLandingUnreadNumCount;
- (unsigned long long)getFamiliarLandingUnreadNumPullType;
- (BOOL)quicklySlideGuideMaskHasShowed;
- (id)init;
+ (id)sharedInstance;
@end
