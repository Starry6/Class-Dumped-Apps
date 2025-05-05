@interface IESLiveSaaSRankListSectionHeader : NSObject
@property (nonatomic) Q type;
@property (nonatomic) IESLiveSaaSRankListStore store;
@property (nonatomic) IESLiveSaaSRankListModel listModel;
- (id)viewForSection:;
- (double)heightForSection:;
- (void)setListModel:;
- (void)setStore:;
- (void)setType:;
- (id)listModel;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)store;
- (id)initWithType:;
@end
