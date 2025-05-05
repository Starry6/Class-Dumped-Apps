@interface IESLiveReportFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveReportStore reportStore;
- (void)componentCreate;
- (void)p_tapReportItem;
- (void)setReportStore:;
- (void)addLandscapeMoreToolsItem;
- (void)addMoreToolsItem;
- (void)componentMount;
- (id)reportConfigModel;
- (id)reportStore;
- (void)trackReportBtnShow;
- (void).cxx_destruct;
@end
