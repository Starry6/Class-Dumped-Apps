@interface IESECShopProductsSelectButtonContainer : UIView
@property (nonatomic) <IESECShopProductsSelectButtonContainerDelegate> delegate;
- (void)handleTagDidClick:;
- (double)tagViewWidthWithCount:;
- (void)updateWithSelectButtons:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
@end
