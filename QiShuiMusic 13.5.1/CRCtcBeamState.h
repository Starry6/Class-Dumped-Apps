@interface CRCtcBeamState : NSObject
@property (nonatomic) NSMutableDictionary mutablePaths;
@property (nonatomic) NSDictionary paths;
- (id)init;
- (id)paths;
- (void)addPath:;
- (void).cxx_destruct;
- (id)pathForString:;
- (id)sortedKeys;
- (void)mergePathsWithTrailingWhitespaces;
- (id)mutablePaths;
- (void)setMutablePaths:;
- (void)kBest:discarded:k:;
@end
