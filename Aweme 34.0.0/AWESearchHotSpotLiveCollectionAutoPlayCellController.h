@interface AWESearchHotSpotLiveCollectionAutoPlayCellController : AWESearchLiveAutoPlayViewController
@property (nonatomic) UIImageView shadowImageView1;
@property (nonatomic) UIImageView shadowImageView2;
@property (nonatomic) UILabel hotSpotInfoLabel;
@property (nonatomic) AWEGeneralSearchModel searchModel;
- (void)setLogExtraDict:;
- (void)cellWillDisplay;
- (void)setupSubViews;
- (void)player:mediaSizeDidChange:;
- (id)payOverlayView;
- (void)setPayOverlayView:;
- (id)shadowImageView1;
- (id)shadowImageView2;
- (id)hotSpotInfoLabel;
- (void)setShadowImageView1:;
- (void)setShadowImageView2:;
- (void)setHotSpotInfoLabel:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setSearchModel:;
- (id)searchModel;
@end
