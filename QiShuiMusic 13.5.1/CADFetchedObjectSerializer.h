@interface CADFetchedObjectSerializer : NSObject
@property (nonatomic) ClientConnection connection;
@property (nonatomic) NSArray defaultPropertiesToLoad;
@property (nonatomic) NSDictionary relatedObjectPropertiesToLoad;
@property (nonatomic) NSMutableArray wrappers;
@property (nonatomic) NSMutableSet seenObjectIDs;
@property (nonatomic) NSArray fetchedObjectWrappers;
- (id)relatedObjectPropertiesToLoad;
- (id)wrappers;
- (id)seenObjectIDs;
- (id)initWithConnection:defaultPropertiesToLoad:;
- (id)initWithConnection:defaultPropertiesToLoad:relatedObjectPropertiesToLoad:;
- (id)_properties:forEntityIfNotSeen:objectExists:;
- (id)addEntity:;
- (id)_fetchedObjectDictionaryForEntity:;
- (id)connection;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (id)fetchedObjectWrappers;
@end
