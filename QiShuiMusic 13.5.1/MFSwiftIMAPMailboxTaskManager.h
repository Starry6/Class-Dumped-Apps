@interface MFSwiftIMAPMailboxTaskManager : NSObject
@property (nonatomic) BOOL canFetchMessageIDs;
@property (nonatomic) BOOL canFetchSearchResults;
@property (nonatomic) MFMailMessageLibrary library;
- (void)compact;
- (BOOL)canFetchMessageIDs;
- (id)fetchDataForMessage:didDownload:;
- (id)messageIdRollCall:;
- (void)deleteMessagesOlderThanNumberOfDays:compact:;
- (void)updateServerUnreadCountClosingConnection:;
- (void)close;
- (void)reselectMailbox;
- (BOOL)canFetchSearchResults;
- (id)fetchHeadersForMessage:;
- (void)growFetchWindow;
- (void)handleFlagsChangedForMessages:flags:oldFlagsByMessage:;
- (id)fetchDataForMessage:partial:;
- (BOOL)fetchDataForMimePart:range:isComplete:consumer:;
- (long long)fetchNumMessages:preservingUID:options:;
- (long long)fetchMessagesWithMessageIDs:andSetFlags:;
- (id)storeSearchResultMatchingCriterion:limit:offset:error:;
- (id)replayAction:;
- (id)init;
- (void)setLibrary:;
- (id)library;
- (void).cxx_destruct;
- (id)initWithMailbox:taskManager:;
@end
