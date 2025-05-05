@interface RBSAuditToken : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSInteger pidversion;
@property (nonatomic) {?=[8I]} realToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (int)pidversion;
- (void)encodeWithCoder:;
- (int)pid;
- (id)initWithAuditToken:;
- (id)description;
- (id)realToken;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)tokenFromXPCConnection:;
+ (id)tokenFromAuditToken:;
+ (id)tokenFromAuditTokenRef:;
@end
