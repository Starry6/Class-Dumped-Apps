@interface AWEIMMsgStateUtil : NSObject
+ (BOOL)shouldShowMsgStateForCommonMsg:;
+ (BOOL)isMsgWarnState:;
+ (BOOL)needShowStateForMsgType:;
+ (BOOL)shouldShowMsgStateForAnchorMsg:conversation:;
+ (BOOL)shouldShowReadStateForAnchorMsg:conversation:;
@end
