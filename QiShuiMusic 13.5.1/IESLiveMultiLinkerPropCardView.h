@interface IESLiveMultiLinkerPropCardView : UIView
@property (nonatomic) UILabel propCardInfoLabel;
@property (nonatomic) UILabel remainTimeLabel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) IESLiveRevenueInteractPlayAnchorModel anchorModel;
- (id)remainTimeLabel;
- (void)setAnchorModel:;
- (id)anchorModel;
- (BOOL)isNeedFlyAnimationForCount:;
- (id)propCardInfoLabel;
- (void)setPropCardInfoLabel:;
- (void)setRemainTimeLabel:;
- (void)updateLayoutToSmallStyle:;
- (void)updatePropCardViewWithContent:count:remainSeconds:isMultipleKindCardActive:isSmall:;
- (id)init;
- (void).cxx_destruct;
- (void)setupView;
- (id)countLabel;
- (void)setCountLabel:;
@end
