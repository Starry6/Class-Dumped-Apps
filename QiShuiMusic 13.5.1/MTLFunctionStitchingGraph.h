@interface MTLFunctionStitchingGraph : NSObject
@property (nonatomic) NSString functionName;
@property (nonatomic) NSArray nodes;
@property (nonatomic) MTLFunctionStitchingFunctionNode outputNode;
@property (nonatomic) NSArray attributes;
- (id)outputNode;
- (id)init;
- (void)dealloc;
- (void)setNodes:;
- (id)formattedDescription:;
- (void)setAttributes:;
- (id)attributes;
- (id)functionName;
- (id)nodes;
- (id)description;
- (id)copyWithZone:;
- (id)initWithFunctionName:nodes:outputNode:attributes:;
- (void)setFunctionName:;
- (void)setOutputNode:;
@end
