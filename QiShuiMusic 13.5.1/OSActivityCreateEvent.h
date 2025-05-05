@interface OSActivityCreateEvent : OSActivityEvent
@property (nonatomic) Q creatorActivityID;
@property (nonatomic) Q creatorProcessUniqueID;
@property (nonatomic) Q senderProgramCounter;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)creatorActivityID;
- (unsigned long long)creatorProcessUniqueID;
- (unsigned long long)senderProgramCounter;
@end
