@interface LSBundleRegistrationStatePrecondition : LSPrecondition
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isMet;
- (id)initForBundleWithIdentifier:placeholderInstalled:fullApplicationInstalled:;
+ (BOOL)supportsSecureCoding;
@end
