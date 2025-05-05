@interface RxCollectionViewCompositionalLayoutConfiguration : NSObject
@property (nonatomic) q scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) NSArray boundarySupplementaryItems;
@property (nonatomic) q contentInsetsReference;
- (id)initWithScrollDirection:interSectionSpacing:boundarySupplementaryItems:contentInsetsReference:;
- (void)setBoundarySupplementaryItems:;
- (void)setContentInsetsReference:;
- (id)init;
- (long long)scrollDirection;
- (id)boundarySupplementaryItems;
- (void)setInterSectionSpacing:;
- (void).cxx_destruct;
- (void)setScrollDirection:;
- (long long)differencesFromConfiguration:;
- (long long)contentInsetsReference;
- (double)interSectionSpacing;
- (id)copyWithZone:;
+ (id)defaultConfiguration;
@end
