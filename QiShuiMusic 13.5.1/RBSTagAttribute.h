@interface RBSTagAttribute : RBSAttribute
@property (nonatomic) NSString tag;
- (id)tag;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)attributeWithTag:;
@end
