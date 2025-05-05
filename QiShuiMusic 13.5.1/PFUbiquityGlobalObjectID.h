@interface PFUbiquityGlobalObjectID : NSObject
@property (nonatomic) Q hash;
- (id)init;
- (void)dealloc;
- (id)initWithString:;
- (void)updateHash;
- (unsigned long long)hash;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStoreName:entityName:primaryKeyInteger:andPeerID:;
- (id)initWithStoreName:entityName:primaryKey:andPeerID:;
- (id)initWithCompressedString:forStoreWithName:andEntityNames:primaryKeys:peerIDs:;
@end
