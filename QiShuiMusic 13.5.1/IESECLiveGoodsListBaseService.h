@interface IESECLiveGoodsListBaseService : NSObject
@property (nonatomic) IESECLiveGoodsListViewModel viewModel;
@property (nonatomic) IESECLiveGoodsListDataStore dataStore;
@property (nonatomic) IESECLiveContext liveContext;
- (void)setLiveContext:;
- (void)handlePageApiResponse:;
- (id)initWithViewModel:dataStore:liveContext:;
- (id)liveContext;
- (void)setDataStore:;
- (id)dataStore;
- (id)viewModel;
- (void)start;
- (void)stop;
- (void)setup;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
