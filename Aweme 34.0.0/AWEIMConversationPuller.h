@interface AWEIMConversationPuller : NSObject
@property (nonatomic) q nextCursor;
@property (nonatomic) q lastSortOrder;
@property (nonatomic) NSArray shareModelList;
@property (nonatomic) NSMutableSet conversationIdSetM;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)chatDataManager;
- (long long)lastSortOrder;
- (void)setLastSortOrder:;
- (void)fetchAllGroupShareModelByLocalDBWithCompletion:;
- (void)fetchAllGroupShareModelWithCompletion:;
- (id)shareModelList;
- (void)setShareModelList:;
- (void)removeShareModelWithConversationID:;
- (void)fetchAllGroupShareModelByLocalDBWithPageCount:completion:;
- (id)conversationIdSetM;
- (void)setConversationIdSetM:;
- (id)init;
- (void).cxx_destruct;
@end
