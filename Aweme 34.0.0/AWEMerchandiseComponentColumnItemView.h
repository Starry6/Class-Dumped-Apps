@interface AWEMerchandiseComponentColumnItemView : AWEMerchandiseComponentItemView
@property (nonatomic) AWEMerchandiseComponentItemView itemView;
@property (nonatomic) UIView effectView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchInfoDict:;
- (void)configWithModel:filterManager:;
- (void)componentItemView:didSelectItemWithFilterComponentModel:;
- (BOOL)componentItemView:isSelectingWithItemModel:;
- (void)reloadData;
- (id)effectView;
- (id)initWithFrame:;
- (void)setEffectView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)itemView;
- (void)setItemView:;
@end
