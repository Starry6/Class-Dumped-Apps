@interface IESECDraggableLynxUICollectionView : UICollectionView
@property (nonatomic) BOOL isLynxDragging;
@property (nonatomic) LynxListScrollEventEmitter scrollEventEmitter;
- (BOOL)isLynxDragging;
- (id)scrollEventEmitter;
- (void)setIsLynxDragging:;
- (void)setScrollEventEmitter:;
- (void).cxx_destruct;
- (void)moveItemAtIndexPath:toIndexPath:;
@end
