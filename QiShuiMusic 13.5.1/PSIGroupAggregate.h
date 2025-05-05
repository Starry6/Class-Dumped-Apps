@interface PSIGroupAggregate : NSObject
@property (nonatomic) NSArray searchTokens;
@property (nonatomic) NSString transientToken;
@property (nonatomic) PSIGroup filenameGroupInAggregate;
- (void)pop;
- (void).cxx_destruct;
- (id)searchTokens;
- (id)transientToken;
- (id)initWithSearchTokens:groupResultsQueue:;
- (id)_rangeOfString:inGroup:useNormalizedString:extendingSearchRange:matchingFullToken:excludingRanges:;
- (BOOL)pushGroup:;
- (id)aggregateItemWithSearchToken:rangeMatchingToken:group:;
- (BOOL)_verifySortedGroupIdsUnique;
- (id)_newSortedGroupIds;
- (id)newGroupResultWithDateFilter:datedTokens:;
- (id)newGroupResult;
- (void)setTransientToken:;
- (id)filenameGroupInAggregate;
@end
