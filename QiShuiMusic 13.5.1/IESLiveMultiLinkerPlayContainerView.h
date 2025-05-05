@interface IESLiveMultiLinkerPlayContainerView : UIView
@property (nonatomic) IESLiveMultiLinkerPlayContainerItemView firstItemView;
@property (nonatomic) IESLiveRevenueInteractPlayAnchorModel anchorModel;
@property (nonatomic) NSArray lastActivePropTypeList;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
- (void)setAnchorModel:;
- (void)setRightOffset:;
- (id)anchorModel;
- (void)didClickItemWithGesture:;
- (id)firstItemView;
- (id)initWithModel:diContext:;
- (id)lastActivePropTypeList;
- (double)leftOffset;
- (void)refreshContentWithAnchorEffect:activePropEffectList:showCount:fly:;
- (void)removeAllItemView;
- (double)rightOffset;
- (void)setFirstItemView:;
- (void)setLastActivePropTypeList:;
- (void)setLeftOffset:;
- (void).cxx_destruct;
@end
