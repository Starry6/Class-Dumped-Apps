@interface EKDirectorySearchQuery : NSObject
@property (nonatomic) NSSet terms;
@property (nonatomic) BOOL findGroups;
@property (nonatomic) BOOL findLocations;
@property (nonatomic) BOOL findResources;
@property (nonatomic) BOOL findUsers;
@property (nonatomic) Q resultLimit;
- (unsigned long long)resultLimit;
- (void)setFindLocations:;
- (void)setResultLimit:;
- (void).cxx_destruct;
- (void)setFindUsers:;
- (BOOL)findGroups;
- (BOOL)findUsers;
- (BOOL)findLocations;
- (BOOL)findResources;
- (void)setFindGroups:;
- (void)setFindResources:;
- (id)terms;
- (void)setTerms:;
@end
