@interface OPTTSTextToSpeechVoiceResource : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSData data;
- (id)data;
- (long long)type;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)data:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
