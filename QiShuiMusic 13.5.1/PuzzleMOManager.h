@interface PuzzleMOManager : NSObject
@property (nonatomic) PuzzleMOCache cache;
- (void)_destoryContentForIdentifier:;
- (id)_getContainerForIdentifier:;
- (id)_identifierForURL:;
- (void)addContainer:forURL:;
- (id)getContainerForURL:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)sharedInstance;
@end
