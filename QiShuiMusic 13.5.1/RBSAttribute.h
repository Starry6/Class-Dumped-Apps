@interface RBSAttribute : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)debugDescription;
- (id)description;
- (id)_init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
