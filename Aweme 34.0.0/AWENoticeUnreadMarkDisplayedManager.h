@interface AWENoticeUnreadMarkDisplayedManager : NSObject
- (void)addNewUnreadNoticeModelID:;
- (void)removeHaveDisplayedNoticeModelID:;
- (BOOL)checkIsHaveNotBeDisplayedNoticeWithNoticeID:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
