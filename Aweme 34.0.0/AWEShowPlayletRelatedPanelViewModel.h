@interface AWEShowPlayletRelatedPanelViewModel : AWEListDataController
@property (nonatomic) NSMutableArray cardModels;
@property (nonatomic) NSNumber requestTime;
@property (nonatomic) NSMutableDictionary extraParams;
@property (nonatomic) AWEAwemeModel currentAweme;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (id)currentAweme;
- (void)initFetchWithCompletion:;
- (void)setCurrentAweme:;
- (void)loadMoreWithLogExtra:withCompletion:;
- (id)cardModels;
- (void)setCardModels:;
- (void)requestForPlayletCard:;
- (id)requestTime;
- (void)setRequestTime:;
- (void).cxx_destruct;
@end
