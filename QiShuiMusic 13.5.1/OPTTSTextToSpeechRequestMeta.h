@interface OPTTSTextToSpeechRequestMeta : NSObject
@property (nonatomic) q channel_type;
@property (nonatomic) NSString app_id;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)channel_type;
- (id)app_id;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
