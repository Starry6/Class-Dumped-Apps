@interface CNUIUserActionDisambiguationModelFinalizer : NSObject
@property (nonatomic) CNUIUserActionItem defaultAction;
@property (nonatomic) NSMutableArray actions;
@property (nonatomic) NSArray recentActions;
@property (nonatomic) NSArray directoryServiceActions;
@property (nonatomic) NSArray foundOnDeviceActions;
- (id)model;
- (void)setDefaultAction:;
- (void)setActions:;
- (id)defaultAction;
- (id)actions;
- (void).cxx_destruct;
- (id)recentActions;
- (id)initWithDefaultAction:actions:recentActions:directoryServiceActions:foundOnDeviceActions:;
- (void)removeUninterestingItentActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeDuplicateIntentActionsFromSameProvider;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)promoteLoneActionToBeDefault;
- (void)removeDefaultActionFromListOfActions;
- (void)setRecentActions:;
- (id)directoryServiceActions;
- (void)setDirectoryServiceActions:;
- (id)foundOnDeviceActions;
- (void)setFoundOnDeviceActions:;
+ (id)modelWithDefaultAction:actions:recentActions:directoryServiceActions:foundOnDeviceActions:;
@end
