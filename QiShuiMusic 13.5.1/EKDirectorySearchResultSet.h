@interface EKDirectorySearchResultSet : NSObject
@property (nonatomic) NSSet locations;
@property (nonatomic) NSSet groups;
@property (nonatomic) NSSet resources;
@property (nonatomic) NSSet people;
- (id)people;
- (void)setLocations:;
- (id)locations;
- (id)resources;
- (id)groups;
- (void)setGroups:;
- (void)setResources:;
- (void).cxx_destruct;
- (void)setPeople:;
@end
