@interface PKProxyFactory : NSObject
@property (nonatomic) BOOL hasLSDatabaseAccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)plugInRecordForIdentifier:;
- (id)defaultApplicationWorkspace;
- (id)extensionPointForIdentifier:platform:;
- (id)plugInRecordForUUID:;
- (BOOL)hasLSDatabaseAccess;
- (id)plugInKitProxyForURL:;
- (id)plugInKitProxyForUUID:;
- (id)plugInRecordEnumeratorWithExtensionPointName:platform:;
- (id)pluginKitProxyForIdentifier:;
- (id)applicationProxyForBundleURL:;
- (id)plugInRecordEnumerator;
+ (id)defaultFactory;
@end
