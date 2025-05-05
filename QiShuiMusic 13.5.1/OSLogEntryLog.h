@interface OSLogEntryLog : OSLogEntry
@property (nonatomic) q level;
@property (nonatomic) Q activityIdentifier;
@property (nonatomic) NSString process;
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) NSString sender;
@property (nonatomic) Q threadIdentifier;
@property (nonatomic) NSString category;
@property (nonatomic) NSArray components;
@property (nonatomic) NSString formatString;
@property (nonatomic) NSString subsystem;
- (unsigned long long)threadIdentifier;
- (id)components;
- (unsigned long long)activityIdentifier;
- (id)formatString;
- (long long)level;
- (id)subsystem;
- (id)sender;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)processIdentifier;
- (id)initWithEventProxy:;
- (id)process;
- (void).cxx_destruct;
- (id)category;
- (id)initWithDate:composedMessage:processIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
