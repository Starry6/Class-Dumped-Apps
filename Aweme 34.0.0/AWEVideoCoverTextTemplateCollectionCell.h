@interface AWEVideoCoverTextTemplateCollectionCell : AWETextTemplateCollectionViewCell
@property (nonatomic) <AWETextTemplateStickerUIConfigurationProtocol> uiConfig;
- (id)uiConfig;
- (void)updateUIConfig:;
- (void)setUiConfig:;
- (void)updateIconImageIfNeededWithSticker:forCell:atIndexPath:;
- (BOOL)isHasHistory;
- (void)handleClearCellSelected:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
@end
