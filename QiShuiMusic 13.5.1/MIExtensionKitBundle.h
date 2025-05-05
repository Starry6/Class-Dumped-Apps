@interface MIExtensionKitBundle : MIAppExtensionBundle
@property (nonatomic) NSDictionary extensionAttributes;
- (id)extensionPointIdentifier;
- (id)extensionAttributes;
- (void).cxx_destruct;
- (BOOL)validateBundleMetadataWithError:;
- (BOOL)_validatePresenceOfSwiftEntrySectionInFile:shouldHaveSwiftEntry:withError:;
- (BOOL)_validateDelegateClassWithError:;
+ (id)bundlesInParentBundle:subDirectory:matchingPredicate:error:;
@end
