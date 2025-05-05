@interface CNAutocompleteStoreQueryContext : NSObject
@property (nonatomic) CNCache directoryServerReuseCache;
@property (nonatomic) CNCache calendarServerReuseCache;
- (id)init;
- (void).cxx_destruct;
- (id)directoryServerReuseCache;
- (id)calendarServerReuseCache;
+ (id)cacheBoundaryStrategies;
@end
