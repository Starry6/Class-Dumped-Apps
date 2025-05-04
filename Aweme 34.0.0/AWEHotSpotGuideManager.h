@interface AWEHotSpotGuideManager : NSObject
@property (nonatomic) BOOL shouldTriggerOpenNotiStrategy;
@property (nonatomic) BOOL preventDuplicateRequestPitaya;
@property (nonatomic) NSSet watchedItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pushGuideScene;
- (id)watchedItems;
- (void)setWatchedItems:;
- (void)setShouldTriggerOpenNotiStrategy:;
- (BOOL)shouldTriggerOpenNotiStrategy;
- (BOOL)preventDuplicateRequestPitaya;
- (void)setPreventDuplicateRequestPitaya:;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
- (void)showHotSpotOpenNotiAlertIfNeeded:;
- (void)showHotSpotOpenNotiAlertIfNeeded;
- (void)showOpenNotiAlertOnController:model:event:;
- (void)resetShowOpenNotiCount;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
