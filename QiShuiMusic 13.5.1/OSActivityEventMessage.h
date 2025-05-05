@interface OSActivityEventMessage : OSActivityEvent
@property (nonatomic) NSMutableArray arguments;
@property (nonatomic) NSString format;
- (id)arguments;
- (id)format;
- (void).cxx_destruct;
- (void)fillEventData:length:privateBuffer:length:;
@end
