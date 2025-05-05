@interface RBSLaunchRequest : RBSRequest
@property (nonatomic) RBSLaunchContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (id)context;
- (void)encodeWithRBSXPCCoder:;
- (void)executeWithCallback:;
- (BOOL)execute:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (BOOL)execute:assertion:error:;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)execute:error:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
