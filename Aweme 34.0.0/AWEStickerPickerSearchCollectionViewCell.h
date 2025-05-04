@interface AWEStickerPickerSearchCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEStickerPickerSearchView searchView;
@property (nonatomic) <ACCGenericEffectPanelSearchService> model;
- (void)updateUIConfig:;
- (void)scrollToItemAtSection:index:animated:;
- (void)scrollToItemAtSection:index:offset:animated:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
- (id)searchView;
- (void)setSearchView:;
+ (id)identifier;
@end
