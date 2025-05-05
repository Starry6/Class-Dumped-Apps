@interface IESLivePopupInsideCollectionView : UICollectionView
@property (nonatomic) IESLiveScrollViewDelegateProxy delegateProxy;
@property (nonatomic) q popupItemType;
- (void)didSetAttachingDIContext;
- (long long)popupItemType;
- (void)setPopupItemType:;
- (id)initWithFrame:collectionViewLayout:;
- (void)setDelegateProxy:;
- (void)setDelegate:;
- (void).cxx_destruct;
- (id)delegateProxy;
@end
