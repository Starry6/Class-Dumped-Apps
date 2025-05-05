@interface OSLogEntryActivity : OSLogEntry
@property (nonatomic) Q parentActivityIdentifier;
@property (nonatomic) Q activityIdentifier;
@property (nonatomic) NSString process;
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) NSString sender;
@property (nonatomic) Q threadIdentifier;
- (unsigned long long)threadIdentifier;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)activityIdentifier;
- (id)sender;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)processIdentifier;
- (id)initWithEventProxy:;
- (id)process;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
