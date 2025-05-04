@interface AWEIMEmoticonPanelBoxView : UIView
@property (nonatomic) UIStackView horizontalStackView;
@property (nonatomic) UICollectionView tabCollectionView;
@property (nonatomic) UIView separator;
@property (nonatomic) UIView draggableView;
@property (nonatomic) UIStackView verticalStackView;
@property (nonatomic) UICollectionView panelCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithConfig:;
- (void)iesim_themeReload:;
- (void)setTabCollectionView:;
- (void)setDraggableView:;
- (void)p_setupThemeDynamicConfig;
- (void)p_commonCollectionViewSetup:;
- (id)panelCollectionView;
- (void)setPanelCollectionView:;
- (void)setSeparator:;
- (id)separator;
- (id)draggableView;
- (id)tabCollectionView;
- (void).cxx_destruct;
- (id)verticalStackView;
- (void)setVerticalStackView:;
- (id)horizontalStackView;
- (void)setHorizontalStackView:;
@end
