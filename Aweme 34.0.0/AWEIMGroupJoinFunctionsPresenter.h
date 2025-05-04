@interface AWEIMGroupJoinFunctionsPresenter : AWEIMUIViewPresenter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createViewWithContext:;
- (void)themeDidChange:;
- (void)updateFunctionItems;
- (void)dealloc;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithContext:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end
