@interface ASCLockupFeatureProductVariants : NSObject
@property (nonatomic) NSString productVariantID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)productVariantID;
- (id)initWithProductVariantID:;
+ (BOOL)supportsSecureCoding;
@end
