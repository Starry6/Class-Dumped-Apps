@interface PFCloudKitMetadataModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ancillaryModelNamespace;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:;
+ (unsigned long long)ancillaryEntityCount;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:fromStore:;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
@end
