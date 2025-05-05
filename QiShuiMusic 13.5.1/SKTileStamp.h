@interface SKTileStamp : NSObject
@property (nonatomic) Q numberOfColumns;
@property (nonatomic) Q numberOfRows;
@property (nonatomic) ^I tileData;
- (id)init;
- (void)dealloc;
- (unsigned long long)numberOfColumns;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)numberOfRows;
- (BOOL)isEqualToNode:;
- (id)tileData;
- (id)initWithWidth:height:tileData:;
- (void)setTileData:size:;
- (id)tileDefinitionsForTileMap:;
+ (BOOL)supportsSecureCoding;
+ (id)tileStampWithWidth:height:tileData:;
@end
