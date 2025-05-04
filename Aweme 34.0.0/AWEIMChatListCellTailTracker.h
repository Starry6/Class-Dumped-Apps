@interface AWEIMChatListCellTailTracker : NSObject
@property (nonatomic) NSMutableSet iconShowSet;
@property (nonatomic) NSMutableSet greetIconShowSet;
@property (nonatomic) NSMutableSet missedCallRecallIconShowSet;
- (id)p_getChatType:;
- (id)iconShowSet;
- (id)greetIconShowSet;
- (id)missedCallRecallIconShowSet;
- (void)removeShowIconDic;
- (void)trackShootIconShowWith:isChatList:;
- (void)trackGreetIconShowWith:;
- (void)trackVerifiedIconShow;
- (void)trackMissedCallRecallButtonShowWithToken:callType:;
- (void)trackMissedCallRecallButtonClick;
- (void)setIconShowSet:;
- (void)setGreetIconShowSet:;
- (void)setMissedCallRecallIconShowSet:;
- (id)init;
- (void).cxx_destruct;
@end
