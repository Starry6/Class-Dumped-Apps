@interface BDXPagerListContainerCollectionView : UICollectionView
@property (nonatomic) BOOL categoryNestPagingEnabled;
@property (nonatomic) BOOL horizonScrollEnable;
@property (nonatomic) q direction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)horizonScrollEnable;
- (BOOL)isCategoryNestPagingEnabled;
- (void)setCategoryNestPagingEnabled:;
- (void)setHorizonScrollEnable:;
- (long long)direction;
- (void)setDirection:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:;
- (long long)indexOfAccessibilityElement:;
@end
