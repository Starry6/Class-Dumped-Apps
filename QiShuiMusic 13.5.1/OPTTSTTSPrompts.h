@interface OPTTSTTSPrompts : NSObject
@property (nonatomic) NSArray prompts;
@property (nonatomic) NSData prompts_v2;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)prompts;
- (id)prompts_v2;
- (void)prompts_v2:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)prompts_objectAtIndex:;
- (unsigned long long)prompts_count;
- (void)prompts_enumerateObjectsUsingBlock:;
@end
