@interface AWEIMStreakPetSLOComponent : AWEIMComponentBase
@property (nonatomic) NSString petElfPendantShowStage;
@property (nonatomic) NSString achievePageShowStage;
@property (nonatomic) BOOL achievePageSuccessShow;
@property (nonatomic) BOOL pendantHasTracked;
@property (nonatomic) BOOL achievePageHasTracked;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:;
- (void)requestServerIfNeeded;
- (id)getConversation;
- (void)onPendantShow:;
- (void)onAchievePageShow:;
- (void)setPetElfPendantShowStage:;
- (BOOL)pendantHasTracked;
- (void)petWidgetTracking:;
- (id)petElfPendantShowStage;
- (void)setPendantHasTracked:;
- (void)setAchievePageHasTracked:;
- (void)setAchievePageShowStage:;
- (void)setAchievePageSuccessShow:;
- (BOOL)achievePageHasTracked;
- (void)achievePageTracking:;
- (id)achievePageShowStage;
- (BOOL)achievePageSuccessShow;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)getReportConfigValue;
@end
