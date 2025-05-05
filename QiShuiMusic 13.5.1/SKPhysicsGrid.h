@interface SKPhysicsGrid : NSObject
@property (nonatomic) float width;
@property (nonatomic) float height;
- (float)height;
- (float)width;
- (void)spritesFromGrid:gridSize:zPosition:edgeColor:interiorColor:spriteSize:physicsBody:;
- (void)spritesFromGrid:xDivisions:zPosition:spriteSize:texture:physicsBody:;
+ (id)gridFromOccupancyArray:width:height:;
+ (id)gridFromTexture:alphaThreshold:accuracy:;
+ (id)vectorGridFromTexture:accuracy:;
@end
