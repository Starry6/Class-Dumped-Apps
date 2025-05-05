@interface AWEIMEmoticonCollectionViewFactory : NSObject
@property (nonatomic) <AWEIMEmoticonCollectionViewProtocol> collectionView;
@property (nonatomic) AWEIMEmoticonThemeView themeView;
@property (nonatomic) IESIMSaaSEmoticonThemeModel themeModel;
@property (nonatomic) q scene;
- (id)getRecentlyUsed;
- (id)getHorizontalCollectionView;
- (id)getSortedEmoticons;
- (id)getVerticalCollectionView;
- (id)initWithThemeView:themeModel:scene:;
- (void)registerAllEmoticonSessionWithCollectionView:;
- (void)registerRecentlySessionWithCollectionView:;
- (void)reloadCollectionViewWithThemeData:;
- (void)reloadRecentlyUsed;
- (void)setThemeModel:;
- (void)setThemeView:;
- (id)themeModel;
- (id)themeView;
- (void)updateKeyboardFrame:;
- (void)setScene:;
- (long long)scene;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
@end
