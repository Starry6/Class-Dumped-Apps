@interface AWEWeeklyRecommendManager : NSObject
@property (nonatomic) BOOL isShowingWeeklyExplainPanel;
@property (nonatomic) BOOL isClickWeeklyExplainPanelAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowingWeeklyExplainPanel;
- (BOOL)enablePreventVideoPauseByWeeklyExplainPanel;
- (void)setIsClickWeeklyExplainPanelAction:;
- (BOOL)enbaleLabelClick;
- (BOOL)enableExplainPanelPreload;
- (void)setIsShowingWeeklyExplainPanel:;
- (BOOL)isClickWeeklyExplainPanelAction;
+ (id)panelConfig;
+ (id)sharedInstance;
@end
