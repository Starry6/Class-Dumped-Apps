@interface AWESearchGoodsAnchorView : UIView
@property (nonatomic) AWESearchEcommerceInfoAnchorModel model;
@property (nonatomic) AWESearchLiveSearchGoodsView singleGoodsView;
@property (nonatomic) @? clickLiveGoodsBlock;
@property (nonatomic) @? liveGoodsLoadBlock;
- (id)douyinNumberABCFontOfSize:;
- (void)setSingleGoodsView:;
- (id)singleGoodsView;
- (void)clickGoodView:;
- (id)liveGoodsLoadBlock;
- (id)clickLiveGoodsBlock;
- (void)updateWithModel:userWindowUIType:liveWindowStyle:;
- (void)setClickLiveGoodsBlock:;
- (void)setLiveGoodsLoadBlock:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
@end
