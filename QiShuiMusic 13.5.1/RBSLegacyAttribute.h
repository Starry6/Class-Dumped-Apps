@interface RBSLegacyAttribute : RBSAttribute
@property (nonatomic) Q reason;
@property (nonatomic) Q requestedReason;
@property (nonatomic) Q flags;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (unsigned long long)requestedReason;
- (id)description;
- (unsigned long long)flags;
- (BOOL)isEqual:;
+ (id)attributeWithReason:flags:;
@end
