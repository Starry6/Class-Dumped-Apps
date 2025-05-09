@interface RxCollectionCompositionalLayoutSolverOptions : NSObject
@property (nonatomic) @? decorationRegistrationHandler;
@property (nonatomic) NSArray globalSupplementaryItems;
@property (nonatomic) # invalidationContextClass;
@property (nonatomic) # layoutAttributesClass;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) BOOL roundsToScreenScale;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) UICollectionView collectionView;
- (id)decorationRegistrationHandler;
- (id)globalSupplementaryItems;
- (void)setDecorationRegistrationHandler:;
- (void)setGlobalSupplementaryItems:;
- (void)setInvalidationContextClass:;
- (void)setLayoutAttributesClass:;
- (BOOL)layoutRTL;
- (void)setRoundsToScreenScale:;
- (Class)layoutAttributesClass;
- (BOOL)roundsToScreenScale;
- (void)setInterSectionSpacing:;
- (void)setLayoutRTL:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (Class)invalidationContextClass;
- (id)collectionView;
- (double)interSectionSpacing;
+ (id)defaultOptions;
@end
