@interface RBSAssertionIdentifier : NSObject
@property (nonatomic) NSInteger serverPid;
@property (nonatomic) NSInteger clientPid;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (int)clientPid;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (int)serverPid;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)identifierWithClientPid:;
@end
