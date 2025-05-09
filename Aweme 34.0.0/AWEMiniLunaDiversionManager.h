@interface AWEMiniLunaDiversionManager : NSObject
@property (nonatomic) BOOL isShowingPopup;
@property (nonatomic) BOOL isShowingSubscriber;
@property (nonatomic) DUXBottomNotification noti;
@property (nonatomic) AWELunaUgPopView lunaUgPopView;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerOnShow:sourceParam:;
- (void)containerOnHide:sourceParam:;
- (void)setEventParams:;
- (id)lunaUgPopView;
- (void)setLunaUgPopView:;
- (void)setNoti:;
- (id)noti;
- (void)setIsShowingPopup:;
- (BOOL)isShowingPopup;
- (void)hideAll;
- (BOOL)canShowDiversionEntry;
- (id)p_typeStrWithType:;
- (BOOL)isShowingSubscriber;
- (long long)p_thresholdWithType:;
- (double)p_latestShowTs;
- (double)p_popupShowInterval;
- (double)p_showIntervalForType:;
- (void)p_showActionSheetWithCount:type:;
- (long long)p_stepWithType:;
- (void)setIsShowingSubscriber:;
- (BOOL)canShowDiversionPopup:;
- (void)showDiversionPopup:trackParams:completion:;
- (void)increaseCount:type:;
- (void)showSubscriberBottomNotificationWithModel:completion:;
- (id)init;
- (void).cxx_destruct;
- (id)eventParams;
+ (BOOL)miniLunaDiversionOpt;
+ (id)shared;
@end
