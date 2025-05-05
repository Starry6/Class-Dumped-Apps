@interface SKTileGroupRule : NSObject
@property (nonatomic) NSArray tileDefinitionIDs;
@property (nonatomic) SKTileGroup parentGroup;
@property (nonatomic) Q adjacency;
@property (nonatomic) NSArray tileDefinitions;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)copy;
- (id)initWithCoder:;
- (unsigned long long)adjacency;
- (void)encodeWithCoder:;
- (void)setAdjacency:;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (id)parentGroup;
- (void)setParentGroup:;
- (BOOL)isEqualToNode:;
- (id)tileDefinitions;
- (void)setTileDefinitions:;
- (id)tileDefinitionIDs;
- (void)setTileDefinitionIDs:;
- (void)setTileDefinitionParentPointers;
- (id)initWithAdjacency:tileDefinitions:;
- (void)calcTileDefinitionIDsWithTileSet:;
- (void)setTileDefinitionsFromIDsWithTileSet:;
+ (BOOL)supportsSecureCoding;
+ (id)tileGroupRuleWithAdjacency:tileDefinitions:;
@end
