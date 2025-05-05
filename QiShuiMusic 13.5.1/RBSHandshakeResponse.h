@interface RBSHandshakeResponse : NSObject
@property (nonatomic) RBSProcessHandle handle;
@property (nonatomic) NSDictionary assertionIdentifiersByOldIdentifier;
@property (nonatomic) NSDictionary assertionErrorsByOldIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assertionIdentifiersByOldIdentifier;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)handle;
- (void)setHandle:;
- (void)setAssertionIdentifiersByOldIdentifier:;
- (void).cxx_destruct;
- (id)assertionErrorsByOldIdentifier;
- (void)setAssertionErrorsByOldIdentifier:;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
