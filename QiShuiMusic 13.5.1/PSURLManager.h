@interface PSURLManager : NSObject
@property (nonatomic) PSListController<PSTopLevelController> topLevelController;
@property (nonatomic) PSSplitViewController splitViewController;
@property (nonatomic) PSRootController rootController;
- (void)popToRootAndSelectDefaultCategory:performWithoutDeferringTransitions:;
- (void)handleDeferredURLForSpecifierID:resourceDictionary:withCompletion:;
- (id)urlForCurrentNavStack;
- (void)setRootController:;
- (void)setTopLevelController:;
- (void)popToRootAndSelectDefaultCategory:;
- (void)performURLHandlingForController:dictionary:items:controllerNeedsPush:withCompletion:;
- (void)setSplitViewController:;
- (void)setOffsetForController:fromObjectPair:;
- (void)handleDeferredURLForSpecifierID:resourceDictionary:objectOffsetPair:withCompletion:;
- (id)topLevelController;
- (id)keyValueDictionaryForURL:;
- (void).cxx_destruct;
- (id)rootController;
- (void)_performURLHandlingForController:dictionary:items:controllerNeedsPush:;
- (id)splitViewController;
- (void)processURL:animated:fromSearch:withCompletion:;
- (id)currentSpecifierIDPath;
+ (id)sharedManager;
@end
