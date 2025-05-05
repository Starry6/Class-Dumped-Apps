@interface IESECShopProductsPlayableAreaCoordinator : NSObject
@property (nonatomic) double areaPercentage;
@property (nonatomic) double overflowPercentage;
- (double)areaPercentage;
- (BOOL)exceedsPlayableArea:;
- (double)overflowPercentage;
- (void)setAreaPercentage:;
- (void)setOverflowPercentage:;
- (BOOL)viewInPlayableArea:;
@end
