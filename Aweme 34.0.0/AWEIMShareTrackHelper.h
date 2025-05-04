@interface AWEIMShareTrackHelper : NSObject
+ (void)trackCompletionWithShareContext:statusCode:transferBack:;
+ (void)trackGameInviteBackflowWithShareContext:eventType:;
+ (void)trackGameInviteWithShareContext:eventType:withPostscript:;
+ (void)trackGameInviteWithShareContext:eventType:;
+ (id)gameInvitationInfoWithShareContext:;
+ (id)trackGameInviteCommonParamsWithShareContext:eventType:;
+ (void)trackGameInvitePopupViewWithParams:;
@end
