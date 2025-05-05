@interface ASCLockupFeatureSignpostTags : NSObject
@property (nonatomic) NSSet signpostTags;
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
- (id)initWithSignpostTags:;
- (id)signpostTags;
+ (BOOL)supportsSecureCoding;
@end
