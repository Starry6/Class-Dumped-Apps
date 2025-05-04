@interface AWEDetailTrendSubDetailRouterServiceImpl : NSObject
@property (nonatomic) <AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (nonatomic) AWEDetailTrendViewModel trendViewModel;
@property (nonatomic) <AWEDetailTrendTrackerService> trendTrackerService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWitServiceProvider:;
- (void)routerMusicDetailWithActionSender:;
- (void)routerEffectDetailWithEffectId:sourceType:;
- (void)routerTemplateDetailWithMaterialModel:;
- (void)routerJianYinTemplateDetailWithTemplateId:;
- (void)setMusicListDataContext:;
- (void)setTrendTrackerService:;
- (void)setTrendViewModel:;
- (id)musicListDataContext;
- (id)trendViewModel;
- (id)trendTrackerService;
- (BOOL)isSameEffectFromAwemeModelWithEffectID:;
- (BOOL)isSameTemplateFromAwemeModelWithTemplateID:;
- (void).cxx_destruct;
@end
