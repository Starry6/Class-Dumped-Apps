@interface AKBundleInformation : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSString bundleDescription;
@property (nonatomic) Q bundleType;
@property (nonatomic) NSDictionary otherInfo;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleName;
- (id)copyWithZone:;
- (unsigned long long)bundleType;
- (id)initWithBundleIdentifier:bundleName:bundleDescription:bundleType:otherInfo:;
- (id)bundleDescription;
- (id)otherInfo;
+ (BOOL)supportsSecureCoding;
@end
