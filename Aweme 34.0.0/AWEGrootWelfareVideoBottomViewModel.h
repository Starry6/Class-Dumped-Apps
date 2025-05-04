@interface AWEGrootWelfareVideoBottomViewModel : AWEFeedSpeciesBottomViewModel
@property (nonatomic) BOOL hasReportBottomBarShow;
@property (nonatomic) BOOL hasReportDonateBtnShow;
- (void)trackForShowAction;
- (void)setHasReportBottomBarShow:;
- (void)setHasReportDonateBtnShow:;
- (id)getSunValue;
- (void)trackForEvent:;
- (id)getVideoPlayTime;
- (BOOL)hasReportBottomBarShow;
- (BOOL)hasReportDonateBtnShow;
@end
