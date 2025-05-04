@interface AWEStickerPickerFavoriteView : UIView
@property (nonatomic) CALayer bgLayer;
@property (nonatomic) ACCCollectionButton favoriteButton;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) BOOL selected;
- (id)bgLayer;
- (void)setBgLayer:;
- (void)setFavoriteButton:;
- (void)setIsAnimated:;
- (void)setBgLayerColor:;
- (void)toggleSelected;
- (id)buttonTitleForState:;
- (id)getImageEdgeInsetsForState:;
- (id)getTitleEdgeInsetsForState:;
- (double)getFavoriteButtonBackgroundWidthForState:;
- (BOOL)isAnimated;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)favoriteButton;
@end
