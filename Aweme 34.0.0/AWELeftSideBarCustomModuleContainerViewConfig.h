@interface AWELeftSideBarCustomModuleContainerViewConfig : NSObject
@property (nonatomic) BOOL enableEmptyShow;
@property (nonatomic) double detailViewEmptyHeight;
@property (nonatomic) double detailViewTopPadding;
@property (nonatomic) double detailViewBottomPadding;
@property (nonatomic) double detailViewLeftPadding;
@property (nonatomic) double detailViewRightPadding;
- (BOOL)enableEmptyShow;
- (void)setEnableEmptyShow:;
- (double)detailViewEmptyHeight;
- (void)setDetailViewEmptyHeight:;
- (double)detailViewTopPadding;
- (void)setDetailViewTopPadding:;
- (double)detailViewBottomPadding;
- (void)setDetailViewBottomPadding:;
- (double)detailViewLeftPadding;
- (void)setDetailViewLeftPadding:;
- (double)detailViewRightPadding;
- (void)setDetailViewRightPadding:;
@end
