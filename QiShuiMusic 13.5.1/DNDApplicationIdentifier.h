@interface DNDApplicationIdentifier : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) Q platform;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBundleID:;
- (void)encodeWithCoder:;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)diffDescription;
- (id)initWithBundleID:platform:;
+ (BOOL)supportsSecureCoding;
@end
