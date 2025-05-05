@interface WFOpenURLContextualAction : WFContextualAction
@property (nonatomic) NSURL url;
@property (nonatomic) NSString bundleIdentifier;
- (id)url;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithURL:bundleIdentifier:actionTitle:;
+ (BOOL)supportsSecureCoding;
@end
