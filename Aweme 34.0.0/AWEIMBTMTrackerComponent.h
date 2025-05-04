@interface AWEIMBTMTrackerComponent : AWEIMComponentBase
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL hasReportBTMTracking;
@property (nonatomic) AWEUserModel fullDetailUser;
- (void)hostVC_viewDidAppear;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (void)takeParamsForMessageTransferWithClueInfo;
- (BOOL)hasReportBTMTracking;
- (id)im_btm_pageIdentifier;
- (void)setHasReportBTMTracking:;
- (BOOL)isAppearing;
- (void).cxx_destruct;
- (void)setIsAppearing:;
+ (BOOL)canCreateComponentWithContext:;
@end
