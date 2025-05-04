@interface AWELivePreStreamVSElement : AWELiveBusinessBaseElement
@property (nonatomic) UIView vsWatermarkView;
@property (nonatomic) BOOL hadReportPv;
@property (nonatomic) AWELivingCellControllerApi vsPvApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (id)vsWatermarkView;
- (void)setVsWatermarkView:;
- (void)streamPlayer_firstFrame;
- (void)preloadElement;
- (id)provideCoreDataForEvent:;
- (void)setHadReportPv:;
- (void)p_reportPv;
- (BOOL)hadReportPv;
- (id)vsPvApi;
- (void)setVsPvApi:;
- (void)setData:;
- (void).cxx_destruct;
@end
