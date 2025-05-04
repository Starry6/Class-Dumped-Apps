@interface AWESearchAICachalotDataController : AWESearchVerticalDataController
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundConfig;
@property (nonatomic) BOOL showError;
- (id)searchBackgroundConfig;
- (void)setSearchBackgroundConfig:;
- (long long)syncGetSearchAITabLoadingConfig;
- (long long)syncGetSearchAITabAmbientConfig;
- (Class)customResponseClass;
- (void)refreshResponse:;
- (void)loadMoreResponse:;
- (id)init;
- (void).cxx_destruct;
- (void)setShowError:;
- (BOOL)showError;
@end
