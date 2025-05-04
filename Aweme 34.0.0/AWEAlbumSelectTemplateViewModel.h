@interface AWEAlbumSelectTemplateViewModel : NSObject
@property (nonatomic) ACCFavoriteMVTemplatesDataController favoriteDataController;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) NSArray dataProviderArray;
@property (nonatomic) NSArray tabTitleArray;
@property (nonatomic) NSArray viewControllers;
- (id)publishModel;
- (void)setPublishModel:;
- (id)initWithPublishModel:;
- (id)tabTitleArray;
- (void)createDataProvider;
- (void)setFavoriteDataController:;
- (id)favoriteDataController;
- (void)setDataProviderArray:;
- (void)setTabTitleArray:;
- (id)dataProviderArray;
- (id)viewControllers;
- (void)setViewControllers:;
- (void).cxx_destruct;
@end
