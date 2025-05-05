@interface PKApplicationProxy : PKBundleProxy
@property (nonatomic) NSArray plugInKitPlugins;
@property (nonatomic) BOOL placeholder;
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
- (BOOL)isPlaceholder;
- (id)plugInKitPlugins;
+ (id)applicationProxyForBundleURL:;
@end
