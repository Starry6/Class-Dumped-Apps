@interface PKBundleProxy : NSObject
@property (nonatomic) LSBundleProxy lsObject;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSURL relativeAppStoreReceiptURL;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSURL dataContainerURL;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleVersion;
- (id)entitlements;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)dataContainerURL;
- (id)localizedName;
- (void).cxx_destruct;
- (id)initWithLSBundleProxy:;
- (id)relativeAppStoreReceiptURL;
- (id)lsObject;
@end
