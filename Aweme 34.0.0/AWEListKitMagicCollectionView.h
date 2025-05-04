@interface AWEListKitMagicCollectionView : UICollectionView
@property (nonatomic) BOOL disableContentOffsetRestorationAnchor;
- (BOOL)disableContentOffsetRestorationAnchor;
- (void)setDisableContentOffsetRestorationAnchor:;
- (void)_saveContentOffsetRestorationAnchorIfNecessaryUsingModel:;
- (void)_rebaseContentOffsetAnchorOrScrollTargetForUpdate:;
@end
