@interface AWEDetailTrendMusicListLunaServiceImpl : NSObject
@property (nonatomic) <AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (nonatomic) AWEDetailTrendViewModel trendViewModel;
@property (nonatomic) AWELunaUgPopView lunaUgPopView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWitServiceProvider:;
- (void)tapLunaUGButtonWithActionSender:;
- (void)jumpToMiniLunaWithActionSender:;
- (void)tapLunaAppendPlaylistWithActionSender:;
- (void)setMusicListDataContext:;
- (void)setTrendViewModel:;
- (id)musicListDataContext;
- (id)trendViewModel;
- (void)p_updateAppendPlaylistButtonCollected:;
- (id)p_createLunaDiversionPublicParamsWithMusicItemViewModel:;
- (id)lunaUgPopView;
- (void)setLunaUgPopView:;
- (id)p_configGradientColor:;
- (void).cxx_destruct;
@end
