@interface AWEMusicDetailHeaderPromotionView : UIView
@property (nonatomic) UIImageView promotionIcon;
@property (nonatomic) UIView splitView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) AWEMusicDetailHeaderDataHelper dataHelper;
@property (nonatomic) AWEMusicDetailPromotionModel promotionModel;
- (id)dataHelper;
- (void)setDataHelper:;
- (id)promotionModel;
- (void)weakBindDataHelper:;
- (void)setPromotionModel:;
- (id)splitView;
- (void)setSplitView:;
- (id)promotionIcon;
- (void)p_trackPromoteTickerClickFormClickArea:;
- (void)p_didClickPromotionView;
- (void)p_didClickPromotionIconView;
- (void)p_didClickPromotionDescribetionView;
- (void)updateContentWithPromotionModel:;
- (void)setPromotionIcon:;
- (id)init;
- (void)setDescriptionLabel:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setupUI;
@end
