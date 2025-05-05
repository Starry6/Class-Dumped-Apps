@interface UgenRecylerLayoutCell : UICollectionViewCell
@property (nonatomic) UgenWidget widget;
@property (nonatomic) <UgenRecylerLayoutCellItemProvider> provider;
- (id)p_parseDataBindingValueWithKey:value:source:;
- (id)p_realWidget:;
- (void)p_refreshWidget:node:;
- (void)refreshWidget:nodeTree:;
- (void)setProvider:;
- (void)setWidget:;
- (id)widget;
- (void)prepareForReuse;
- (id)provider;
- (void).cxx_destruct;
@end
