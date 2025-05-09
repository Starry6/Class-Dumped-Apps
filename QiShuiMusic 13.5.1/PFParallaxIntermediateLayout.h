@interface PFParallaxIntermediateLayout : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inactiveRect;
@property (nonatomic) Q zoomStrategy;
@property (nonatomic) Q overlapStrategy;
@property (nonatomic) Q parallaxStrategy;
@property (nonatomic) Q inactiveStrategy;
@property (nonatomic) double cropScore;
@property (nonatomic) double layoutScore;
@property (nonatomic) double timeBottomOverlap;
@property (nonatomic) double timeTopOverlap;
@property (nonatomic) double unsafeAreaOverlap;
@property (nonatomic) double uninflatedUnsafeAreaOverlap;
@property (nonatomic) NSString debugStub;
- (double)layoutScore;
- (id)visibleRect;
- (id)debugDescription;
- (double)cropScore;
- (id)initWithVisibleRect:inactiveRect:zoomStrategy:overlapStrategy:parallaxStrategy:inactiveStrategy:cropScore:layoutScore:timeBottomOverlap:timeTopOverlap:unsafeAreaOverlap:uninflatedUnsafeAreaOverlap:;
- (id)initWithVisibleRect:inactiveRect:zoomStrategy:overlapStrategy:parallaxStrategy:inactiveStrategy:;
- (id)initWithVisibleRect:;
- (BOOL)clockOverlapAcceptableForLayoutConfiguration:;
- (double)clockOverlapAcceptabilityForLayoutConfiguration:inflated:;
- (id)debugStub;
- (id)inactiveRect;
- (unsigned long long)zoomStrategy;
- (unsigned long long)overlapStrategy;
- (unsigned long long)parallaxStrategy;
- (unsigned long long)inactiveStrategy;
- (double)timeBottomOverlap;
- (double)timeTopOverlap;
- (double)unsafeAreaOverlap;
- (double)uninflatedUnsafeAreaOverlap;
@end
