@interface AWETwoLineHotPointPanelTableViewCell : UITableViewCell
@property (nonatomic) UILabel indexLabel;
@property (nonatomic) UIImageView hotSpotImageView;
@property (nonatomic) UILabel hotSpotContentLabel;
@property (nonatomic) UIImageView hotCountIconView;
@property (nonatomic) UILabel useCountLabel;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) LOTAnimationView hotLiveLottieView;
@property (nonatomic) UILabel relationLabel;
@property (nonatomic) UIImageView risingHotSpotImageView;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView hotSpotImageMaskView;
@property (nonatomic) UIView contentLabelMaskView;
@property (nonatomic) UIView useCountLabelMaskView;
@property (nonatomic) AWENewHotSearchModel model;
@property (nonatomic) AWEHotSpotInnerContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideMaskView;
- (id)tagImageView;
- (id)relationLabel;
- (void)setRelationLabel:;
- (void)setTagImageView:;
- (void)configUI;
- (id)hotLiveLottieView;
- (void)setHotLiveLottieView:;
- (void)configureWithModel:showAction:indexPath:;
- (id)risingHotSpotImageView;
- (id)hotCountIconView;
- (id)useCountLabel;
- (void)configureWithModel:indexPath:;
- (void)showMaskViewWithIndexPath:;
- (void)bindContext:;
- (void)setIndexLabel:;
- (void)setRisingHotSpotImageView:;
- (void)setHotCountIconView:;
- (void)setUseCountLabel:;
- (id)hotSpotImageView;
- (id)hotSpotContentLabel;
- (void)p_updateTagImageViewLayoutWithImage:showAction:;
- (void)configMaskViewUI;
- (id)hotSpotImageMaskView;
- (id)contentLabelMaskView;
- (id)useCountLabelMaskView;
- (void)setHotSpotImageView:;
- (void)setHotSpotContentLabel:;
- (void)setHotSpotImageMaskView:;
- (void)setContentLabelMaskView:;
- (void)setUseCountLabelMaskView:;
- (void)setModel:;
- (id)indexLabel;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)action;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setSelected:animated:;
- (id)actionButton;
- (void)setActionButton:;
+ (id)reuseIdentifier;
+ (double)cellHeight;
@end
