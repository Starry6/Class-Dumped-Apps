@interface ENCDGroup : NSManagedObject
@property (nonatomic) <ENCypher> cypher;
@property (nonatomic) ENGroupID groupID;
@property (nonatomic) ENStableGroupID stableGroupID;
@property (nonatomic) q groupIDGeneration;
@property (nonatomic) NSData sharedApplicationData;
+ (id)insertIntoManagedObjectContext:;
+ (id)fetchRequest;
+ (id)groupFromGroup:insertIntoManagedObjectContext:;
+ (id)predicateForGroupID:;
+ (id)predicateForGroupIDs:;
+ (id)predicateForStableGroupID:;
@end
