@interface NSCollectionLayoutEdgeSpacing : NSObject
@property (nonatomic) NSCollectionLayoutSpacing leading;
@property (nonatomic) NSCollectionLayoutSpacing top;
@property (nonatomic) NSCollectionLayoutSpacing trailing;
@property (nonatomic) NSCollectionLayoutSpacing bottom;
- (id)top;
- (BOOL)isSpacingFixedForEdge:;
- (id)edgeOutsets;
- (id)_spacingForEdge:;
- (void).cxx_destruct;
- (BOOL)isSpacingFlexibleForEdge:;
- (double)spacingForEdge:;
- (id)bottom;
- (id)_externalDescription;
- (id)description;
- (id)trailing;
- (BOOL)_hasSpacing;
- (BOOL)isEqual:;
- (id)initWithLeading:top:trailing:bottom:;
- (id)leading;
- (id)copyWithZone:;
+ (id)defaultSpacing;
+ (id)spacingForLeading:top:trailing:bottom:;
+ (id)flexibleSpacing:;
+ (id)fixedSpacing:;
@end
