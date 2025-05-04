@interface AWEAuthorizationCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEMemoriesThemeAuthorizationView authorizationView;
@property (nonatomic) AWEMemoriesPlayerTileModel tileModel;
- (void)p_setupUI;
- (id)authorizationView;
- (id)tileModel;
- (void)setTileModel:;
- (void)setAuthorizationView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
