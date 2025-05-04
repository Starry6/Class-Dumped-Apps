@interface AWEAfterLiveFollowPushGuideManager : NSObject
@property (nonatomic) NSString currentSelectionInfo;
@property (nonatomic) NSString currentGroupID;
@property (nonatomic) NSDictionary psortTrackerInfo;
@property (nonatomic) BOOL hasShowPopupView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentGroupID;
- (void)showPitayaPushGuide:;
- (void)setPsortTrackerInfo:;
- (id)currentSelectionInfo;
- (void)setCurrentSelectionInfo:;
- (id)psortTrackerInfo;
- (void)registerLiveFollowGuideByPitaya;
- (BOOL)hasShowPopupView;
- (void)setHasShowPopupView:;
- (void).cxx_destruct;
- (void)setCurrentGroupID:;
+ (id)shareInstance;
@end
