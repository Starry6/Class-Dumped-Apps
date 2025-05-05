@interface SKTileGroup : NSObject
@property (nonatomic) SKTileSet parentSet;
@property (nonatomic) Q type;
@property (nonatomic) NSArray rules;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)copy;
- (id)rules;
- (void)setType:;
- (id)initWithCoder:;
- (void)setRules:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (BOOL)isEqualToNode:;
- (void)setRuleParentPointers;
- (id)initWithTileDefinition:;
- (id)initWithRules:;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:tileSetType:;
- (id)findTileDefinitionIDsForAdjacencyData:tileSetType:;
- (id)parentSet;
- (void)setParentSet:;
+ (BOOL)supportsSecureCoding;
+ (id)tileGroupWithTileDefinition:;
+ (id)tileGroupWithRules:;
+ (id)emptyTileGroup;
@end
