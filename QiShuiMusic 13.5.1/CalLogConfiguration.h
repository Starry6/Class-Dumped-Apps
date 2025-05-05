@interface CalLogConfiguration : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray nodes;
- (id)init;
- (void)setName:;
- (void)setNodes:;
- (id)nodes;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithDetailedDefinition:;
- (id)initWithSimpleDefinition:;
- (void)parseConfigurationDefinition:;
- (id)parseNodeDefinition:;
- (id)parseFilterDefinition:;
- (id)parseWriterDefinition:;
@end
