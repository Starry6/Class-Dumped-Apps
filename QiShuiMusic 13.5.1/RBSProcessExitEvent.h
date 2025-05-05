@interface RBSProcessExitEvent : NSObject
@property (nonatomic) RBSProcessHandle process;
@property (nonatomic) RBSProcessExitContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (id)context;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void)setProcess:;
- (id)process;
- (void).cxx_destruct;
- (id)description;
- (void)setContext:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
