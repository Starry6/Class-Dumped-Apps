@interface AWEIMStrangerMultiTabHeaderTabModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) q unreadCount;
@property (nonatomic) BOOL hasUnreadDot;
@property (nonatomic) NSString trackerTabName;
- (id)trackerTabName;
- (void)setTrackerTabName:;
- (BOOL)hasUnreadDot;
- (void)setHasUnreadDot:;
- (long long)unreadCount;
- (BOOL)isShowing;
- (void)setUnreadCount:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setIsShowing:;
@end
