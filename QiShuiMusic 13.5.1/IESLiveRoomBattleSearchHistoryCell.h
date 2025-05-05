@interface IESLiveRoomBattleSearchHistoryCell : UITableViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray historyWords;
@property (nonatomic) UILabel explanationLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)historyWords;
- (void)setExplanationLabel:;
- (void)setHistoryWords:;
- (void)showHistoryWith:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (id)explanationLabel;
- (double)widthForText:;
- (void)layoutUI;
@end
