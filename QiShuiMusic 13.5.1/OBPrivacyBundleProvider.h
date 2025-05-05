@interface OBPrivacyBundleProvider : NSObject
@property (nonatomic) NSString enclosingBundleIdentifier;
@property (nonatomic) NSString privacyBundleName;
@property (nonatomic) NSString path;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)path;
- (void).cxx_destruct;
- (id)initWithEnclosingBundleIdentifier:privacyBundleName:;
- (id)_bundleRecordWithError:;
- (id)enclosingBundleIdentifier;
- (void)setEnclosingBundleIdentifier:;
- (id)privacyBundleName;
- (void)setPrivacyBundleName:;
@end
