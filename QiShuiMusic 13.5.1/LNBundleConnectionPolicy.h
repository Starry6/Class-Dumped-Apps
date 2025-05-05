@interface LNBundleConnectionPolicy : NSObject
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)appBundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)connectionWithError:;
- (id)initWithBundleIdentifier:appBundleIdentifier:;
@end
