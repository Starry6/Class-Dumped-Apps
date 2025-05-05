@interface EXExtensionPointCatalog : NSObject
@property (nonatomic) NSDictionary extensionPointByIdentifierPlatform;
- (id)init;
- (id)extensionPointForIdentifier:;
- (id)extensionPointForIdentifier:platform:;
- (void).cxx_destruct;
- (id)initWithEnumerator:;
- (id)extensionPointByIdentifierPlatform;
@end
