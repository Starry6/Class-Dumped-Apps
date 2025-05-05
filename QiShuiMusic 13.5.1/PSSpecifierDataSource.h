@interface PSSpecifierDataSource : NSObject
@property (nonatomic) NSMutableArray specifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (id)specifierForID:;
- (void).cxx_destruct;
- (id)observers;
- (void)setPreferenceValue:specifier:;
- (id)readPreferenceValue:;
- (void)loadSpecifiers;
- (id)specifiersForSpecifier:observer:;
- (void)enumerateObserversUsingBlock:;
- (id)observersOfClass:;
- (void)enumerateObserversOfClass:usingBlock:;
- (void)performUpdates:;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (BOOL)areSpecifiersLoaded;
- (void)performUpdatesAnimated:usingBlock:;
+ (id)sharedInstance;
+ (id)loadSpecifiersFromPlist:inBundle:target:stringsTable:;
@end
