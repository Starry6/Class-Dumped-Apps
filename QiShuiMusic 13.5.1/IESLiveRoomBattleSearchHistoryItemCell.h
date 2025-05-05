@interface IESLiveRoomBattleSearchHistoryItemCell : UICollectionViewCell
@property (nonatomic) UILabel searchHistoryLabel;
@property (nonatomic) UIImageView deleteImage;
@property (nonatomic) NSString historyStr;
- (void)setDeleteImage:;
- (id)deleteImage;
- (void)didTapSearch;
- (id)historyStr;
- (id)searchHistoryLabel;
- (void)setHistoryStr:;
- (void)setSearchHistoryLabel:;
- (void)updateHistoryLabel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)deleteHistory;
@end
