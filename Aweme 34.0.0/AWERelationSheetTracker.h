@interface AWERelationSheetTracker : NSObject
+ (void)trackAddFriendPanelShow:isInitiator:;
+ (void)trackAddFriend:isInitiator:isPostscript:postscriptType:isRemark:;
+ (id)p_relationParams:;
@end
