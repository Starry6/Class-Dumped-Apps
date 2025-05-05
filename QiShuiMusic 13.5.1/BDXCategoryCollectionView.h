@interface BDXCategoryCollectionView : UICollectionView
@property (nonatomic) NSArray indicators;
@property (nonatomic) <BDXCategoryCollectionViewGestureDelegate> gestureDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIndicators:;
- (id)indicators;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)gestureDelegate;
- (void)setGestureDelegate:;
@end
