@interface OPTTSTextToSpeechMeta : NSObject
@property (nonatomic) OPTTSTextToSpeechVoice voice;
@property (nonatomic) OPTTSTextToSpeechResource resource;
- (id)voice;
- (void).cxx_destruct;
- (id)resource;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
