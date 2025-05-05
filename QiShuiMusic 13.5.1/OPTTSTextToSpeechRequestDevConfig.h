@interface OPTTSTextToSpeechRequestDevConfig : NSObject
@property (nonatomic) BOOL return_log;
@property (nonatomic) NSString voice_asset_path;
@property (nonatomic) NSString resource_asset_path;
@property (nonatomic) BOOL return_server_info;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)return_log;
- (id)voice_asset_path;
- (id)resource_asset_path;
- (BOOL)return_server_info;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
