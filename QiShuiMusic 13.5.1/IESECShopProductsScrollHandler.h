@interface IESECShopProductsScrollHandler : NSObject
@property (nonatomic) NSString perfScene;
@property (nonatomic) @? pagerViewDidScrollCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addScrollsToTopViewToTopView;
- (void)didTapScrollToTopView;
- (void)handleProductsModuleScrollEvent:;
- (id)initWithHybridContext:;
- (id)pagerViewDidScrollCallback;
- (id)perfScene;
- (void)setPagerViewDidScrollCallback:;
- (void)setPerfScene:;
- (void)updatePlayableArea;
- (void)updateProductModuleEvent;
- (void)updateTabMaxScreenNumber:;
- (void)scrollViewDidEndDecelerating:;
- (void)dealloc;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (BOOL)scrollViewShouldScrollToTop:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
@end
