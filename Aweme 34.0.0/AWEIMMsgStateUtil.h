@interface AWEIMMsgStateUtil : NSObject
+ (BOOL)shouldShowMsgStateForAnchorMsg:conversation:;
+ (BOOL)shouldShowMsgStateForCommonMsg:;
+ (BOOL)isAlwaysShowReadStateMsg:;
+ (BOOL)needShowStateForMsgType:;
+ (BOOL)enableNoFriendsHidReadStatAB;
+ (BOOL)isMsgWarnState:;
+ (BOOL)shouldShowMsgStateForCommonMsgOpt:;
+ (BOOL)isAlwaysShowReadStateMsgOpt:;
+ (BOOL)disableReadStateLogAB;
+ (BOOL)disableNoFriendsShowReadStatWithPeerUser:;
+ (BOOL)shouldCreateReceiptModelForMessage:;
+ (BOOL)shouldUpdateReadStateForMessage:conversation:;
+ (BOOL)shouldShowReadStateForAnchorMsg:conversation:;
@end
