@interface AWEECMallCompensationManager : NSObject
@property (nonatomic) BOOL experimentSwitch;
@property (nonatomic) BOOL needSettingsCompensation;
@property (nonatomic) AWEECMallMessageRedTag cacheBadgeModel;
@property (nonatomic) AWEECMallBubbleSourceModel cacheBubbleModel;
@property (nonatomic) NSMutableDictionary priorityMap;
- (void)observerTabItemShowStatusWith:canShowBadge:canShowBubble:;
- (void)setExperimentItem:;
- (void)setPriorityList:;
- (void)handleCacheBubble:result:source:;
- (void)handleCacheBadge:result:;
- (void)setCacheBubbleModel:;
- (void)setCacheBadgeModel:;
- (void)setExperimentSwitch:;
- (void)setPriorityMap:;
- (BOOL)needSettingsCompensation;
- (void)setNeedSettingsCompensation:;
- (BOOL)experimentSwitch;
- (id)cacheBubbleModel;
- (id)cacheBadgeModel;
- (id)priorityMap;
- (BOOL)higherPriority:;
- (void)cacheSettingsShowResult:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
