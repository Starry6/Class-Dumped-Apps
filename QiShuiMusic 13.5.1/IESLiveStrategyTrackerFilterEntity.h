@interface IESLiveStrategyTrackerFilterEntity : NSObject
@property (nonatomic) NSDictionary filterDict;
- (BOOL)filterCompareValue:;
- (id)filterDict;
- (BOOL)filterType:;
- (BOOL)isFilterTracker:;
- (void)setFilterDict:;
- (id)init;
- (void).cxx_destruct;
@end
