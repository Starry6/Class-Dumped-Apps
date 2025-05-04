@interface AWEPlayletTracker : NSObject
@property (nonatomic) AWEPlayletPageContext context;
- (id)aAWEPadModuleAdapter;
- (id)commonParams;
- (id)commonParamsWithAweme:;
- (void)trackEventWithName:params:;
- (void)trackPlayletApiMonitor:fetchType:error:errorType:extraParams:;
- (void)trackEventStayPageWithDuration:;
- (id)commonParamsWithPlayletInfo:;
- (void)trackPlayletCardShow:;
- (void)trackTCPlayletStayTime:;
- (void)trackPlayletCardClick:;
- (void)trackPlayletTabShowWithTopTabOrder:enterWay:;
- (void)trackPlayletChannelRefresh;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (Class)aAWEPadModuleAdapterClass;
+ (void)trackPlayletApiMonitor:fetchType:error:errorType:extraParams:;
@end
