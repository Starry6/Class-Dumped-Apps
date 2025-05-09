@interface AWELiveShelfCellIconView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWELiveShelfCellShapeLayerView numberLabelBackView;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) AWEGradientView explainingContainerView;
@property (nonatomic) UILabel explainingLabel;
@property (nonatomic) LOTAnimationView explainingImageView;
@property (nonatomic) UILabel statusMaskView;
@property (nonatomic) @? imageTrackBlock;
- (id)tagImageView;
- (void)setTagImageView:;
- (id)statusMaskView;
- (id)numberLabelBackView;
- (id)explainingContainerView;
- (id)explainingLabel;
- (id)explainingImageView;
- (id)imageTrackBlock;
- (void)setupWithNumber:iconUrlList:isExplaining:statusStr:;
- (void)setupImageTagWithURL:;
- (void)setImageTrackBlock:;
- (void)setNumberLabelBackView:;
- (void)setExplainingContainerView:;
- (void)setExplainingLabel:;
- (void)setExplainingImageView:;
- (void)setStatusMaskView:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
