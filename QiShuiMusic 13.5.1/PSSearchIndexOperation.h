@interface PSSearchIndexOperation : NSOperation
@property (nonatomic) PSSearchEntry searchEntry;
@property (nonatomic) <PSSearchIndexOperationDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)_cancel;
- (void)main;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithSearchEntry:delegate:;
- (void)_finishedIndexingWithEntries:cancelled:;
- (id)searchEntry;
+ (id)_bundleForSearchEntry:thirdPartyApp:;
+ (id)_loadThirdPartySearchEntriesForEntry:bundle:;
+ (id)_loadSearchEntriesFromPlistForEntry:bundle:;
+ (id)possibleBundleRoots;
+ (void)setPossibleBundleRoots:;
+ (id)topLevelManifestBundlePath;
+ (void)setTopLevelManifestBundlePath:;
@end
