@interface AWESwitchRecordModeCollectionView : UICollectionView
@property (nonatomic) BOOL isTouching;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (BOOL)isTouching;
- (void)setIsTouching:;
@end
