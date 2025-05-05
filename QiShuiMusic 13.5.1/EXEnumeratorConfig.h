@interface EXEnumeratorConfig : NSObject
@property (nonatomic) NSURL rootURL;
@property (nonatomic) NSURL xpcExtensionsCache;
@property (nonatomic) NSURL xpcExtensionPointsCache;
@property (nonatomic) NSURL extensionPointsConfigURL;
@property (nonatomic) NSDictionary legacyExtensionPointAllowList;
@property (nonatomic) NSDictionary compatibilityExtensionPointAllowList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)rootURL;
- (id)xpcExtensionsCache;
- (id)xpcExtensionPointsCache;
- (id)extensionPointsConfigURL;
- (id)legacyExtensionPointAllowList;
- (id)compatibilityExtensionPointAllowList;
@end
