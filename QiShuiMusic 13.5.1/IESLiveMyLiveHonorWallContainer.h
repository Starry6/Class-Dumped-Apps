@interface IESLiveMyLiveHonorWallContainer : IESLiveUserCardHonorWallContainer
@property (nonatomic) IESLiveMyLiveHonorOpenMoreView openIndicator;
@property (nonatomic) IESLiveMyLiveHonorWallItemContainer itemContainer;
- (void)openMoreTapped:;
- (double)getBeforeOpenHeight;
- (double)getViewHeight;
- (id)openIndicator;
- (void)setOpenIndicator:;
- (void).cxx_destruct;
- (void)setItemContainer:;
- (id)itemContainer;
- (void)setupUI;
@end
