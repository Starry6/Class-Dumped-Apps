@interface IESECPDPContainerSlideViewDataSource : NSObject
@property (nonatomic) NSMutableArray modelArray;
@property (nonatomic) IESECPDPSlideViewGoodsModel selectedModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSelected:;
- (id)modelArray;
- (id)selectedModel;
- (void)setModelArray:;
- (void)setSelectedModel:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void).cxx_destruct;
@end
