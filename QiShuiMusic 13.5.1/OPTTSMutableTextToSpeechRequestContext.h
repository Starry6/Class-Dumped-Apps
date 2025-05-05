@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext
@property (nonatomic) NSArray context_info;
@property (nonatomic) NSString dialog_identifier;
- (id)init;
- (id)copyWithZone:;
- (id)context_info;
- (void)setContext_info:;
- (id)dialog_identifier;
- (void)setDialog_identifier:;
@end
