@interface BRWatchingConfiguration : NSObject
@property (nonatomic) Q watchTypes;
@property (nonatomic) NSArray appLibraryIDs;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString gatherPrefix;
- (id)urls;
- (void).cxx_destruct;
- (id)initWithScopes:predicate:;
- (unsigned long long)watchTypes;
- (id)appLibraryIDs;
- (id)gatherPrefix;
@end
