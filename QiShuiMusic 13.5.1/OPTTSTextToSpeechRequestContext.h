@interface OPTTSTextToSpeechRequestContext : NSObject
@property (nonatomic) NSArray context_info;
@property (nonatomic) NSString dialog_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)context_info;
- (id)dialog_identifier;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)context_info_objectAtIndex:;
- (unsigned long long)context_info_count;
- (void)context_info_enumerateObjectsUsingBlock:;
@end
