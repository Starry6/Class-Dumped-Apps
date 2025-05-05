@interface LSPrecondition : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isMet;
+ (BOOL)supportsSecureCoding;
+ (id)emptyPrecondition;
+ (id)registrationStatePreconditionForBundleWithIdentifier:placeholderInstalled:fullApplicationInstalled:;
@end
