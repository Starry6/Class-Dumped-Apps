@interface WFLinkContextualAction : WFContextualAction
@property (nonatomic) LNAction linkAction;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)linkAction;
- (id)initWithAction:bundleIdentifier:;
- (BOOL)showsUserInterfaceWhenRunning;
+ (BOOL)supportsSecureCoding;
@end
