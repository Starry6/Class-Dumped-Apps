@interface LNBundleMetadataGeneratorDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
- (id)initWithName:version:;
- (id)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
