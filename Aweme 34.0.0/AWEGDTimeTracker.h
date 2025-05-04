@interface AWEGDTimeTracker : NSObject
@property (nonatomic) q stayTime;
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) <AWEGDContainerTrackerProtocol> trackerProvider;
- (void)setStayTime:;
- (long long)stayTime;
- (id)trackerProvider;
- (void)stopTrackerForKey:;
- (void)executeTracker;
- (void)startTrackerForKey:;
- (id)initWithContext:trackerProvider:;
- (void)setTrackerProvider:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
