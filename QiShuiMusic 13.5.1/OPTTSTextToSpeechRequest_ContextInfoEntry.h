@interface OPTTSTextToSpeechRequest_ContextInfoEntry : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)key;
- (void).cxx_destruct;
- (id)value;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
