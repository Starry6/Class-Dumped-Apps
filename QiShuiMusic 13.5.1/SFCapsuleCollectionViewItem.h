@interface SFCapsuleCollectionViewItem : NSObject
@property (nonatomic) q animationCount;
@property (nonatomic) SFCapsuleView capsuleView;
@property (nonatomic) SFCapsuleCollectionView collectionView;
@property (nonatomic) BOOL capsuleIsDetached;
@property (nonatomic) BOOL capsuleContentIsValid;
- (long long)animationCount;
- (void)setCapsuleContentIsValid:;
- (void)setAnimationCount:;
- (void)setCapsuleView:;
- (id)initWithCollectionView:;
- (double)capsuleHeightForWidth:defaultHeight:state:index:;
- (void).cxx_destruct;
- (id)capsuleView;
- (void)invalidateCapsuleHeight;
- (BOOL)capsuleContentIsValid;
- (BOOL)capsuleIsDetached;
- (id)collectionView;
- (void)setCapsuleIsDetached:;
@end
