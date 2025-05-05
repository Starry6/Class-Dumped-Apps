@interface AWEIMChatListCellTailTracker : NSObject
@property (nonatomic) NSMutableSet iconShowSet;
@property (nonatomic) NSMutableSet greetIconShowSet;
- (void)setIconShowSet:;
- (void)trackShootIconClickWith:result:;
- (id)greetIconShowSet;
- (id)iconShowSet;
- (id)p_getChatType:;
- (void)removeShowIconDic;
- (void)setGreetIconShowSet:;
- (void)trackGreetIconShowWith:;
- (void)trackShootIconShowWith:isChatList:;
- (id)init;
- (void).cxx_destruct;
@end
