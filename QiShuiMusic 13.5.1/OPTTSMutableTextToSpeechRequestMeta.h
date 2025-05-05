@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta
@property (nonatomic) q channel_type;
@property (nonatomic) NSString app_id;
- (id)init;
- (id)copyWithZone:;
- (long long)channel_type;
- (void)setChannel_type:;
- (id)app_id;
- (void)setApp_id:;
@end
