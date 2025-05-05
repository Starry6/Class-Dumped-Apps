@interface CNUINavigationListViewCellHeightEstimator : NSObject
@property (nonatomic) <CNUINavigationListStyle> navigationListStyle;
@property (nonatomic) NSNumber estimatedCellHeightNumber;
@property (nonatomic) NSNumber estimatedDetailCellHeightNumber;
@property (nonatomic) double estimatedCellHeight;
@property (nonatomic) double estimatedDetailCellHeight;
- (void).cxx_destruct;
- (void)setNavigationListStyle:;
- (id)navigationListStyle;
- (id)initWithNavigationListStyle:;
- (double)estimatedCellHeight;
- (double)estimatedDetailCellHeight;
- (id)estimatedCellHeightNumber;
- (void)setEstimatedCellHeightNumber:;
- (id)estimatedDetailCellHeightNumber;
- (void)setEstimatedDetailCellHeightNumber:;
@end
