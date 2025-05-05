@interface OPTTSMutableTextToSpeechRequestDevConfig : OPTTSTextToSpeechRequestDevConfig
@property (nonatomic) BOOL return_log;
@property (nonatomic) NSString voice_asset_path;
@property (nonatomic) NSString resource_asset_path;
@property (nonatomic) BOOL return_server_info;
- (id)init;
- (id)copyWithZone:;
- (BOOL)return_log;
- (void)setReturn_log:;
- (id)voice_asset_path;
- (void)setVoice_asset_path:;
- (id)resource_asset_path;
- (void)setResource_asset_path:;
- (BOOL)return_server_info;
- (void)setReturn_server_info:;
@end
