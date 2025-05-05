@interface IESECWinLiveTabTitleCellController : IESECWinRecommendTitleSectionController
@property (nonatomic) IESECListKitListUpdater listUpdater;
@property (nonatomic) UICollectionViewCell cell;
@property (nonatomic) @ cellModel;
@property (nonatomic) IESECListKitItemDataModel bffItemData;
@property (nonatomic) q section;
@property (nonatomic) q index;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)willDisplayWithSource:extraParams:;
+ (Class)cellModelClass;
+ (Class)cellClass;
@end
