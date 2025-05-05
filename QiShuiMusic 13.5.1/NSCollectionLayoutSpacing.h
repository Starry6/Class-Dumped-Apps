@interface NSCollectionLayoutSpacing : NSObject
@property (nonatomic) double spacing;
@property (nonatomic) BOOL isFlexibleSpacing;
@property (nonatomic) BOOL isFixedSpacing;
- (double)spacing;
- (BOOL)isFixedSpacing;
- (id)_externalDescription;
- (id)description;
- (id)initWithSpacing:isFlexible:;
- (BOOL)_hasSpacing;
- (BOOL)isFlexibleSpacing;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:;
+ (id)fixedSpacing:;
@end
