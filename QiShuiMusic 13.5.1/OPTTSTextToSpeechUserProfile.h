@interface OPTTSTextToSpeechUserProfile : NSObject
@property (nonatomic) NSArray resources;
- (id)resources;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)resources_objectAtIndex:;
- (unsigned long long)resources_count;
- (void)resources_enumerateObjectsUsingBlock:;
@end
