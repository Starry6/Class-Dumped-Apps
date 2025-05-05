@interface SKWarpGeometryGrid : SKWarpGeometry
@property (nonatomic) r^ sourcePositions;
@property (nonatomic) r^ destPositions;
@property (nonatomic) q numberOfColumns;
@property (nonatomic) q numberOfRows;
@property (nonatomic) q vertexCount;
- (id)init;
- (long long)numberOfColumns;
- (long long)vertexCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)numberOfRows;
- (id).cxx_construct;
- (id)copyWithZone:;
- (BOOL)isIdentityWarp;
- (id)initWithColumns:rows:sourcePositions:destPositions:;
- (BOOL)isEqualToGrid:;
- (id)sourcePositionAtIndex:;
- (id)destPositionAtIndex:;
- (id)sourcePositions;
- (id)destPositions;
- (id)gridByReplacingSourcePositions:;
- (id)gridByReplacingDestPositions:;
+ (id)grid;
+ (BOOL)supportsSecureCoding;
+ (id)gridWithColumns:rows:;
+ (id)gridWithColumns:rows:sourcePositions:destPositions:;
@end
