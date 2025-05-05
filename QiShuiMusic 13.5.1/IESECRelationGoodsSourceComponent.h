@interface IESECRelationGoodsSourceComponent : UIView
@property (nonatomic) IESECShopGoodsSourceView goodsSourceView;
@property (nonatomic) @? clickGoodsSourceBlock;
@property (nonatomic) IESECWindowPreloadCompoentObject preloadObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)goodsSourceView;
- (id)clickGoodsSourceBlock;
- (void)didTapGoodsSourceView;
- (void)p_setupUI;
- (id)preloadObj;
- (void)setClickGoodsSourceBlock:;
- (void)setGoodsSourceView:;
- (void)setPreloadObj:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)createPreloadCompoentObjectWihtModel:;
+ (id)goodsSource;
+ (id)goodsSourceWithHeight:sourceLabelColor:padding:;
@end
