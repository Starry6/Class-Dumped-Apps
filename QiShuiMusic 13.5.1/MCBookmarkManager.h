@interface MCBookmarkManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> memberQueue;
@property (nonatomic) NSArray memberQueueCurrentUserBookmarks;
@property (nonatomic) NSDictionary memberQueueStashedBookmarksByLabel;
@property (nonatomic) NSInteger notificationToken;
@property (nonatomic) NSArray userBookmarks;
- (void)setMemberQueue:;
- (id)memberQueue;
- (id)init;
- (id)userBookmarks;
- (void).cxx_destruct;
- (void)setUserBookmarks:;
- (int)notificationToken;
- (void)memberQueueRereadBookmarks;
- (void)memberQueueSetUserBookmarks:;
- (void)memberQueueSetStashedUserBookmarksByLabel:;
- (void)memberQueueStashUserBookmarksWithLabel:newUserBookmarks:;
- (void)stashUserBookmarksWithLabel:newUserBookmarks:;
- (void)unstashUserBookmarksFromLabel:;
- (id)memberQueueCurrentUserBookmarks;
- (void)setMemberQueueCurrentUserBookmarks:;
- (id)memberQueueStashedBookmarksByLabel;
- (void)setMemberQueueStashedBookmarksByLabel:;
- (void)setNotificationToken:;
+ (id)sharedManager;
@end
