@interface TSPKCallStackCacheInfo : NSObject
- (id)loadWithVersion:;
- (void)save:forVersion:;
- (id)cachePath:;
+ (id)sharedInstance;
@end
