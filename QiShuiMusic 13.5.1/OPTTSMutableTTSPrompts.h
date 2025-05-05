@interface OPTTSMutableTTSPrompts : OPTTSTTSPrompts
@property (nonatomic) NSArray prompts;
@property (nonatomic) NSData prompts_v2;
- (id)init;
- (id)copyWithZone:;
- (id)prompts;
- (void)setPrompts:;
- (id)prompts_v2;
- (void)setPrompts_v2:;
- (void)prompts_v2:;
@end
