@interface IESECRelationTagsComponent : UIView
@property (nonatomic) UIView<IESECStoreGoodsTagsContainerProtocol> tagsView;
@property (nonatomic) IESECRelationTagListView productTagsView;
@property (nonatomic) @? clickGoodsTagBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productTagsView;
- (id)clickGoodsTagBlock;
- (void)p_setupUI;
- (id)preloadObj;
- (void)setClickGoodsTagBlock:;
- (void)setPreloadObj:;
- (void)setProductTagsView:;
- (void)setTagsView:;
- (id)tagsView;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)createPreloadCompoentObjectWihtModel:;
+ (id)tagsWithHeight:padding:;
+ (id)tagsWithHeight:padding:newDashLine:;
+ (id)tagsWithHeight:padding:tag:;
+ (id)tags;
@end
