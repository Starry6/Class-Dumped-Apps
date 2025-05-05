@interface IESECCommentShowDatasource : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) IESECCommentShowDataManager dataManager;
@property (nonatomic) IESECCommentShowConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)flowLayoutHeightWithWidth:item:;
- (id)cellModelWithCommentDetail:;
- (id)collectionView:layoutForSection:;
- (id)sections;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)init;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setConfig:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setDataManager:;
- (id)dataManager;
- (void).cxx_destruct;
- (void)setSections:;
- (long long)numberOfSectionsInCollectionView:;
- (id)config;
- (void)registerCells:;
@end
