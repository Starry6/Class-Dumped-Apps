@interface BDXLynxViewPager : UICollectionView
@property (nonatomic) <BDXLynxViewPagerLightProtocol> uiDelegate;
@property (nonatomic) BOOL attachScroll;
@property (nonatomic) double gestureBeginOffset;
- (BOOL)attachScroll;
- (double)gestureBeginOffset;
- (void)setAttachScroll:;
- (void)setGestureBeginOffset:;
- (id)initWithFrame:collectionViewLayout:;
- (id)uiDelegate;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setUiDelegate:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
@end
