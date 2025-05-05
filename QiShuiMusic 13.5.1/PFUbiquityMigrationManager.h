@interface PFUbiquityMigrationManager : NSObject
- (void)dealloc;
- (id)initWithDestinationModel:storeName:previousModelVersionHash:ubiquityRootLocation:localPeerID:;
- (id)initWithDestinationModel:sourceModel:ubiquityRootLocation:localPeerID:;
@end
