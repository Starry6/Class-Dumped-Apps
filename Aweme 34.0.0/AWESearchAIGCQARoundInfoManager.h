@interface AWESearchAIGCQARoundInfoManager : NSObject
@property (nonatomic) NSMutableArray allRounds;
- (id)allRounds;
- (id)roundInfoForNode:;
- (id)addQueryNode:searchUniqueID:;
- (id)roundInfoForSearchUniqueID:;
- (id)roundInfoForSearchID:;
- (BOOL)removeRoundWithSearchUniqueID:;
- (BOOL)removeRoundWithSearchID:;
- (BOOL)removeRoundWithNode:;
- (id)allQARoundInfos;
- (id)allQARoundInfosWithConversationID:;
- (BOOL)isLastRoundWithSearchUniqueID:;
- (void)setAllRounds:;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
@end
