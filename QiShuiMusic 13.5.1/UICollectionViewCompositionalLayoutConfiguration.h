@interface UICollectionViewCompositionalLayoutConfiguration : NSObject
@property (nonatomic) q safeAreaReference;
@property (nonatomic) q scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) NSArray boundarySupplementaryItems;
@property (nonatomic) q contentInsetsReference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBoundarySupplementaryItems:;
- (void)setContentInsetsReference:;
- (id)init;
- (long long)scrollDirection;
- (void)_setSafeAreaReference:;
- (id)boundarySupplementaryItems;
- (long long)_safeAreaReference;
- (void)setInterSectionSpacing:;
- (void).cxx_destruct;
- (void)setScrollDirection:;
- (unsigned long long)differencesFromConfiguration:;
- (long long)contentInsetsReference;
- (double)interSectionSpacing;
- (id)initWithScrollDirection:interSectionSpacing:boundarySupplememtaryItems:contentInsetsReference:;
- (id)copyWithZone:;
+ (id)defaultConfiguration;
@end
