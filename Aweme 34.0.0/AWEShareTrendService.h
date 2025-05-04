@interface AWEShareTrendService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithTrend:extraLogInfo:onViewController:;
- (id)contextWithTrendInfo:;
- (id)statsShareTrendStage;
@end
