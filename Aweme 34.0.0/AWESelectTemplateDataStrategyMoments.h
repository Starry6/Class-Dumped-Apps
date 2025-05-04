@interface AWESelectTemplateDataStrategyMoments : NSObject
@property (nonatomic) AWESelectTemplateViewModel viewModel;
@property (nonatomic) AWEMomentsPreviewDataProvider templateDataProvider;
@property (nonatomic) AWESelectTemplateDataPreload templateDataPreload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)templateResourcePreload;
- (BOOL)templateRecommendAssetsChanged;
- (void)templatesfetch;
- (void)templateGenerateData;
- (void)templateGenerateDataCancel;
- (void)setupWithTemplateViewModel:;
- (void)templateSelectWithIndex:;
- (void)templateGenerateDataWithIndex:;
- (void)templateResourcePreloadCancel;
- (void)templateDataCheck;
- (void)refreshSelectTemplateModels;
- (id)templateDataPreload;
- (void)setTemplateDataPreload:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setTemplateDataProvider:;
- (id)templateDataProvider;
@end
