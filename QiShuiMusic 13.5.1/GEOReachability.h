@interface GEOReachability : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)reportTileLoadSuccess:;
- (void)dealloc;
- (void)_reachabilityChanged:;
- (BOOL)anyFailures;
- (BOOL)networkAvailable;
- (void)resourceManifestManagerWillChangeActiveTileGroup:;
- (void)_resetErrors;
- (void)reportLoadFailure:;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
+ (id)sharedReachability;
@end
