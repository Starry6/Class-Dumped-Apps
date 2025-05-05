@interface DLGMem : NSObject
@property (nonatomic) DLGMemUIView memView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)initVars;
- (void)launchDLGMem;
- (void)searchMem:type:comparison:;
- (void)modifyMem:value:type:;
- (void)DLGMemUILaunched:;
- (void)DLGMemUISearchValue:type:comparison:;
- (void)DLGMemUIModifyValue:address:type:;
- (void)DLGMemUIRefresh;
- (void)DLGMemUIReset;
- (id)DLGMemUIMemory:size:;
- (int)memTypeFromDLGMemValueType:;
- (int)memComparisonFromDLGMemComparison:;
- (id)memView;
- (void)setMemView:;
- (void).cxx_destruct;
@end
