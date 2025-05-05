@interface WBSForYouDataSourceWeightManager : NSObject
- (void)clear;
- (void).cxx_destruct;
- (id)initWithKeyValueStore:;
- (double)weightForSource:;
- (void)downvoteSource:;
@end
