@interface AFBundleResource : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString extension;
- (id)init;
- (id)extension;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithName:extension:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
