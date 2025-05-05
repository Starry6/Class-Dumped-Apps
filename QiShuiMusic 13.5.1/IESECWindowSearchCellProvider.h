@interface IESECWindowSearchCellProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)doubleColumnCellForCollectionContext:scene:viewModel:sectionController:atIndex:delegate:tabStyle:;
- (double)heightForItemAtIndex:viewModel:tabStyle:;
- (id)relationCardViewModelWithGoodsModel:;
- (id)relationCardViewModelWithGoodsModel:tabStyle:;
- (id)singleColumnCellForCollectionContext:scene:viewModel:sectionController:atIndex:delegate:tabStyle:;
- (id)init;
- (void).cxx_destruct;
@end
