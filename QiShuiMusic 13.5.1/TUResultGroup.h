@interface TUResultGroup : NSObject
@property (nonatomic) TUGroupTitle title;
@property (nonatomic) NSMutableArray resultsCache;
@property (nonatomic) NSArray results;
@property (nonatomic) Q groupType;
- (unsigned long long)groupType;
- (void)setTitle:;
- (id)results;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)removeSearchItem:;
- (id)initWithTitle:results:;
- (id)resultsCache;
- (void)setResultsCache:;
@end
