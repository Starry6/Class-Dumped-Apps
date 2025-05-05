@interface OPTTSTextToSpeechRequestDebug : NSObject
@property (nonatomic) BOOL force_use_tts_service;
@property (nonatomic) BOOL disable_cache;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)force_use_tts_service;
- (BOOL)disable_cache;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
