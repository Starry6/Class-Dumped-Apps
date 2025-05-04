@interface AWEListenFeedBackgroundElement : AWEListenFeedInteractionBaseElement
@property (nonatomic) AWEListenFeedBgImageCollectionView bgImageCollectionView;
@property (nonatomic) UIImage defaultBgImage;
@property (nonatomic) UIView maskView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleConnectionChanged:;
- (void)updateWithModel:playModel:extendModelArray:mixVideoModel:currentModelIndex:context:;
- (void)updateWithModel:playModel:context:;
- (id)bgImageCollectionView;
- (void)scrollToContentOffset:;
- (void)bgImageColletionView:didScrollFromIndex:toIndex:;
- (id)defaultBgImage;
- (long long)bgImageColletionViewNumberOfItems:;
- (id)bgImageColletionView:cellForIndexPath:;
- (void)extendModelArrayDidUpdate;
- (void)prepareForReuseVC;
- (void)setBgImageCollectionView:;
- (void)setDefaultBgImage:;
- (id)maskView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void).cxx_destruct;
- (void)setMaskView:;
@end
