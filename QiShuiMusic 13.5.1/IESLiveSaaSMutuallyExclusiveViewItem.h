@interface IESLiveSaaSMutuallyExclusiveViewItem : BDDynamicModel
@property (nonatomic) NSArray mutuallyExclusiveViewItems;
@property (nonatomic) q itemIdentifier;
@property (nonatomic) @? addViewBlock;
@property (nonatomic) <IESLiveMutuallyExclusiveViewItemIDAdapter> itemID;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
@end
