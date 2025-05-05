@interface OSActivityUserActionEvent : OSActivityEvent
@property (nonatomic) Q senderProgramCounter;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)senderProgramCounter;
@end
