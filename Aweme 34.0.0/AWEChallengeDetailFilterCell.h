@interface AWEChallengeDetailFilterCell : UICollectionViewCell
@property (nonatomic) <AWEChallengeDetailFilterCellDelegate> delegate;
@property (nonatomic) AWEChallengeFilterView filterView;
@property (nonatomic) AWEChallengeVideoHeadView videoHeadView;
@property (nonatomic) AWEChallengeDetailFilterModel filterModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFilterModel:;
- (id)filterModel;
- (void)updateSortType:;
- (id)videoHeadView;
- (void)sortViewDidClick;
- (void)filterView:didFinishedSelectSortType:;
- (void)configWithFilterModel:;
- (void)setVideoHeadView:;
- (id)filterView;
- (id)delegate;
- (void)setFilterView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
