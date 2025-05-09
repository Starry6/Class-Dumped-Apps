@interface AWEIMChatPanelBadgeViewModel : NSObject
@property (nonatomic) BOOL isPanelVisible;
@property (nonatomic) BOOL isEntryVisible;
@property (nonatomic) BOOL isBadgeVisible;
@property (nonatomic) Q entryType;
@property (nonatomic) <IESIMThrottleDebounceAction> throttle;
@property (nonatomic) AWEIMChatPanelBadgeRecord record;
@property (nonatomic) AWEIMPlatformChatPanelBadgeModel badgeModel;
@property (nonatomic) NSString badgeTitle;
@property (nonatomic) BOOL shouldShowBadge;
@property (nonatomic) @? refreshAction;
- (id)refreshAction;
- (void)onClick;
- (id)badgeModel;
- (void)setBadgeModel:;
- (void)setRefreshAction:;
- (id)badgeRecordKey;
- (void)p_mergeLocalRecordAndBadgeModel;
- (void)p_checkExitConditions;
- (void)setIsEntryVisible:;
- (void)p_exposureCheck;
- (void)setIsPanelVisible:;
- (void)p_asyncSaveRecord;
- (BOOL)isEntryVisible;
- (BOOL)isPanelVisible;
- (id)initWithBadgeModel:entryType:;
- (void)onEntryStatusChanged:;
- (void)onPanelStatusChanged:;
- (id)throttle;
- (void)setRecord:;
- (unsigned long long)entryType;
- (id)record;
- (void).cxx_destruct;
- (BOOL)shouldShowBadge;
- (void)setEntryType:;
- (id)badgeTitle;
- (void)setBadgeTitle:;
- (BOOL)isBadgeVisible;
- (void)setIsBadgeVisible:;
- (void)setThrottle:;
@end
