@interface AWESearchFilterManager : NSObject
@property (nonatomic) BOOL shouldRequestFilter;
@property (nonatomic) BOOL hideFilter;
@property (nonatomic) NSNumber redDotTimeStamp;
@property (nonatomic) NSMutableDictionary preNotFilterParams;
@property (nonatomic) NSArray sections;
@property (nonatomic) @? onFilterReload;
- (void)initWithDefault;
- (BOOL)getShouldShowFilter;
- (BOOL)getShouldHideHistoryResult;
- (BOOL)getIsFilteredSearch;
- (BOOL)getHasRedDotItem;
- (void)updateWithExtraModel:;
- (void)showHistoryPopupIfNeeded;
- (id)getFilterParams;
- (BOOL)getShouldShowFullHistoryBlock;
- (unsigned long long)filterHintType;
- (void)setShouldRequestFilter:;
- (id)preNotFilterParams;
- (id)onFilterReload;
- (void)updateForceWithSectionModelArray:;
- (void)setHideFilter:;
- (BOOL)hideFilter;
- (void)updateForceWithExtraModel:;
- (BOOL)shouldRequestFilter;
- (BOOL)getIsHistorySelected;
- (id)redDotTimeStamp;
- (BOOL)isSelectedWithSectionName:andItem:;
- (void)setRedDotTimeStamp:;
- (void)updateWithSectionModelArray:;
- (void)addRedDotStorageWithSection:itemIndex:;
- (BOOL)getShouldInit;
- (id)fetchGeneralFilterParams;
- (id)getPreNotFilterParams;
- (id)getCommonFilterParams;
- (void)setIconRedDotState;
- (BOOL)getShouldRequestFilter;
- (void)setOnFilterReload:;
- (void)setPreNotFilterParams:;
- (id)init;
- (id)sections;
- (void)setSections:;
- (void).cxx_destruct;
- (void)updateSections:;
+ (id)preGetFilterParams;
@end
