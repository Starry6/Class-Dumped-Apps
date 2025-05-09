@interface AWEPadHorizontalSectionViewModel : AWEPadBaseSectionViewModel
@property (nonatomic) AWEPadHorizontalSectionInnerViewModel innerSectionViewModel;
@property (nonatomic) AWEPadHorizontalCellController horizontalCellController;
@property (nonatomic) NSNumber scrollOffsetX;
@property (nonatomic) @? handleForScrollToCollectionTop;
@property (nonatomic) @? scrollViewDidScrollToEndAction;
@property (nonatomic) @? scrollViewDidDragged;
@property (nonatomic) # innerSectionViewModelClazz;
- (void)removeModels:animated:sync:;
- (id)modelsArray;
- (void)replaceByModels:;
- (void)updateByModels:animated:sync:;
- (void)appendModels:animated:sync:;
- (void)replaceByModels:animated:sync:;
- (void)removeAllModels:sync:;
- (void)insertModel:atIndex:animated:sync:;
- (void)setScrollViewDidDragged:;
- (id)innerSectionViewModel;
- (void)setInnerSectionViewModel:;
- (void)setHandleForScrollToCollectionTop:;
- (id)scrollOffsetX;
- (void)setScrollOffsetX:;
- (void)triggerCollectionViewScrollToTop;
- (id)scrollViewDidScrollToEndAction;
- (id)horizontalCellController;
- (Class)innerSectionViewModelClazz;
- (id)handleForScrollToCollectionTop;
- (void)setScrollViewDidScrollToEndAction:;
- (id)scrollViewDidDragged;
- (void)setInnerSectionViewModelClazz:;
- (void)setHorizontalCellController:;
- (void).cxx_destruct;
@end
