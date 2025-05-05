@interface IMCollaborationNoticeController : NSObject
- (id)init;
- (id)remoteDaemon;
- (id)listener;
- (void)fetchCollaborationNoticesForChatGUID:completionHandler:;
- (void)dismissNotice:;
- (void)collaborationNoticesDidChangeForChatGUIDs:;
+ (id)sharedInstance;
@end
