@interface AWEIMGroupSPTasksController : NSObject
@property (nonatomic) WCTDatabase database;
- (id)wcdbFilePath;
- (void)__log:;
- (id)businessSettings;
- (BOOL)clearDBIfNeeded;
- (id)wcdbDirectory;
- (id)asyncGetConversationTaskControllerWithConversationID:;
- (id)conversationTaskControllerWithConversationID:;
- (void)setDatabase:;
- (id)database;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
