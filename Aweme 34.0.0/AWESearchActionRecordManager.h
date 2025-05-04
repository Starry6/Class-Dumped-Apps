@interface AWESearchActionRecordManager : NSObject
@property (nonatomic) NSMutableSet searchIdSet;
@property (nonatomic) NSMutableArray searchResultActionList;
- (void)pushSearchResultRecordIfNotExistWithSearchType:searchId:searchKeyword:enterFrom:enterMethod:groupID:;
- (id)searchResultActionList;
- (void)setSearchIdSet:;
- (void)setSearchResultActionList:;
- (id)searchIdSet;
- (id)init;
- (void).cxx_destruct;
@end
