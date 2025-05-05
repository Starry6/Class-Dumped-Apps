@interface IESECLiveHeaderPromotionLeftView : UIView
@property (nonatomic) IESECLiveStackView contentStackView;
@property (nonatomic) IESECLiveGoodsBackGroundLeftModel leftModel;
@property (nonatomic) BOOL showArrow;
- (id)leftModel;
- (void)setLeftModel:;
- (void)setShowArrow:;
- (BOOL)showArrow;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)contentStackView;
- (void)setupUI;
- (void)setContentStackView:;
@end
