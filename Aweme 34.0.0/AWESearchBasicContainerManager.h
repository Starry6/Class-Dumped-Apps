@interface AWESearchBasicContainerManager : NSObject
@property (nonatomic) NSMutableDictionary searchExitTransitionDict;
@property (nonatomic) NSArray functionAssembleArray;
@property (nonatomic) NSDictionary functionAssembleDict;
- (id)searchContainerCustomExitTransitionKeyWith:;
- (id)searchTransitionStringWithKey:;
- (id)searchInteractiveTransitionWith:;
- (id)functionAssembleDict;
- (BOOL)pageNeedFunctionAssembleWithSearchType:;
- (id)getFunctionAssembleDictWithType:;
- (id)searchExitTransitionDict;
- (id)exitTransitionStrWith:;
- (id)transitionFunctionAssembleDictFromArray:;
- (void)registExitTransitionWithClassStr:TransitionType:;
- (void)setFunctionAssembleDict:;
- (void)setSearchExitTransitionDict:;
- (id)functionAssembleArray;
- (void)setFunctionAssembleArray:;
- (void).cxx_destruct;
+ (void)handleContainerFunctionAssembleWithConfig:;
+ (id)shareInstance;
@end
