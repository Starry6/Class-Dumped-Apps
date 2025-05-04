@interface AWEIMExpandCollectionView : UICollectionView
@property (nonatomic) @? touchesStateChangedBlock;
- (void)setTouchesStateChangedBlock:;
- (id)touchesStateChangedBlock;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
