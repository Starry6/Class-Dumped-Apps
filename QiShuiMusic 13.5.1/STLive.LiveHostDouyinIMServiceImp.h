@interface STLive.LiveHostDouyinIMServiceImp : NSObject
- (void)openMessagePageToAnchorWithOpenId:nickName:fromVC:;
- (void)openMyHomePage;
- (void)registerUnreadCountWithBlock:;
- (BOOL)shouldShowMessagePageEntrance;
- (BOOL)shouldShowMyHomePage;
- (id)init;
- (void).cxx_destruct;
@end
