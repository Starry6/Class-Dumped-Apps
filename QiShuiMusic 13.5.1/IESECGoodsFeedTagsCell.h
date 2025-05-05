@interface IESECGoodsFeedTagsCell : IESECGoodsFeedBaseCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithTagModels:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateWithViewModel:;
@end
