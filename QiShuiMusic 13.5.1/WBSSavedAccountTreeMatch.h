@interface WBSSavedAccountTreeMatch : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSDictionary accountStoreTreeMatchingSearchCriteria;
@property (nonatomic) q matchLevel;
@property (nonatomic) NSMutableArray flattenedSavedAccountsFromTree;
- (void).cxx_destruct;
- (id)domain;
- (long long)matchLevel;
- (id)initWithDomain:savedAccountTree:matchLevel:;
- (id)flattenedSavedAccountsFromTree;
- (void)pruneEmptyUsernameTrees;
- (void)pruneDontSaveTrees;
- (void)pruneUsernameTreesNotMatchingPartialUsername:;
- (void)pruneTreesWithoutPasswordOrMatchingPasskeyIdentifiers:;
- (id)accountStoreTreeMatchingSearchCriteria;
@end
