@interface PFMetadataTypeVerifier : NSObject
- (id)init;
- (id)valueForKey:fromProperties:;
- (id)_expectedImageArrayPropertyTypes;
- (id)valueForKeyPath:fromProperties:;
- (id)valueForAVMetadataIdentifier:fromAVMetadataItems:;
- (id)_expectedAVMetadataKeyKeySpaceTypes;
- (id)valueAtIndex:forKey:fromArray:;
- (id)_expectedImageDictionaryPropertyTypes;
- (id)valueForKeyPath:index:fromProperties:;
- (id)valueForKey:keySpace:fromAVMetadataItems:;
- (id)_expectedAVMetadataIdentifierTypes;
- (void).cxx_destruct;
- (id)_verifiedValue:forKey:expectedTypes:;
- (id)_coerceValue:toClass:forKey:;
@end
