@interface AWESearchLiveMultiStyleGoodsView : UIView
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q style;
@property (nonatomic) NSArray goodsModelArray;
@property (nonatomic) AWESearchLiveSearchGoodsView goodsView;
@property (nonatomic) AWESearchLiveSearchMultiGoodsListMediumView mediumListGoodsView;
@property (nonatomic) <AWESearchLiveMultiStyleGoodsViewDelegate> delegate;
@property (nonatomic) NSIndexPath indexPath;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)goodsView;
- (void)setGoodsView:;
- (void)onGoodsViewClickedWith:index:;
- (void)setGoodsModelArray:;
- (id)goodsModelArray;
- (void)updateMultiStyleGoodsUI;
- (void)updateMultiStyleGoodsBackgroundColor:;
- (void)dismissGoodsView;
- (void)dismissMediumListGoodsView;
- (void)showGoodsView;
- (void)showMediumListGoodsView;
- (void)goodsViewTapAction:;
- (id)mediumListGoodsView;
- (void)setMediumListGoodsView:;
- (id)delegate;
- (id)indexPath;
- (id)initWithFrame:;
- (void)setIndexPath:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setStyle:;
- (void)updateWithModel:;
+ (double)getHeightWithModel:andWidth:;
@end
