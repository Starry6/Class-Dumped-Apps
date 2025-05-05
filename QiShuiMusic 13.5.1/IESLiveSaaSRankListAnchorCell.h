@interface IESLiveSaaSRankListAnchorCell : IESLiveSaaSTopAnchorTableViewCell
@property (nonatomic) <HTSLiveSaaSRankListActions> actionCreator;
@property (nonatomic) IESLiveSaaSRankListStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionCreator;
- (void)setActionCreator:;
- (void)updateWithListModel:type:atIndex:;
- (void)updateWithModel:user:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (void)setupViews;
+ (double)contentHeight;
@end
