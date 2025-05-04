@interface AWEDetailTrendShareServiceImpl : NSObject
@property (nonatomic) UIViewController host;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) AWEDetailTrendViewModel stateContext;
@property (nonatomic) <AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (nonatomic) <AWEDetailTrendTrackerService> trendTrackerService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHost:serviceProvider:;
- (void)shareWithActionSender:;
- (void)setMusicListDataContext:;
- (void)setTrendTrackerService:;
- (id)musicListDataContext;
- (id)trendTrackerService;
- (void)setHost:;
- (id)host;
- (void)setProvider:;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
- (id)provider;
@end
