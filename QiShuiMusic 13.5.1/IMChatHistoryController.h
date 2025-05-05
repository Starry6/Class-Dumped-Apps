@interface IMChatHistoryController : NSObject
@property (nonatomic) NSMutableDictionary _runningQueries;
- (id)init;
- (void)dealloc;
- (void)set_runningQueries:;
- (void)loadMessageItemWithGUID:completionBlock:;
- (void)messageQuery:finishedWithResult:chatGUIDs:;
- (void)loadMessageWithGUID:completionBlock:;
- (void).cxx_destruct;
- (void)messageItemQuery:finishedWithResult:chatGUIDs:;
- (id)_runningQueries;
+ (id)sharedInstance;
@end
