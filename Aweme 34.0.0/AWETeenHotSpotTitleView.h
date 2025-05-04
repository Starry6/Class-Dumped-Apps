@interface AWETeenHotSpotTitleView : UIView
@property (nonatomic) UIView titleContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView subTitleContainer;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView hotSpotBgView;
@property (nonatomic) UIImageView hotSpotLabel;
- (id)subTitleContainer;
- (void)setSubTitleContainer:;
- (void)p_setupView;
- (id)hotSpotLabel;
- (void)setHotSpotLabel:;
- (void)updateWithHotSpotModel:;
- (id)hotSpotBgView;
- (void)setHotSpotBgView:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setTitleContainer:;
- (id)titleContainer;
@end
