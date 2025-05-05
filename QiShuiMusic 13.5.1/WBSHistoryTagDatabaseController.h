@interface WBSHistoryTagDatabaseController : NSObject
- (id)initWithDatabase:;
- (BOOL)assignHistoryItemWithID:toTopicTagsWithIDs:error:;
- (void).cxx_destruct;
- (BOOL)clearTagsFromStartDate:endDate:error:;
- (BOOL)clearAllTagsWithError:;
- (id)createTagsForIdentifiers:withTitles:type:level:error:;
- (BOOL)renameTagWithID:toTitle:error:;
@end
