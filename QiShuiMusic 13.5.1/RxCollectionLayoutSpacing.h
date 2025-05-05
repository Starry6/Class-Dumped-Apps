@interface RxCollectionLayoutSpacing : NSObject
@property (nonatomic) double spacing;
@property (nonatomic) BOOL isFlexibleSpacing;
@property (nonatomic) BOOL isFixedSpacing;
- (void)setIsFixedSpacing:;
- (void)setIsFlexibleSpacing:;
- (double)spacing;
- (void)setSpacing:;
- (BOOL)isFixedSpacing;
- (id)description;
- (id)initWithSpacing:isFlexible:;
- (BOOL)isFlexibleSpacing;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSpacing;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:;
+ (id)fixedSpacing:;
@end
