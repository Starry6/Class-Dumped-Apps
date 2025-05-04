@interface AWEIMGroupJoinCardTracker : NSObject
+ (void)trackCardTypeShow:;
+ (void)trackCardShareGroupShow:;
+ (void)trackCardTypeClickWithModel:conversation:;
+ (void)trackCardShareGroupClick:;
+ (void)trackCardChatIntroClick:;
+ (void)trackCardJoinAllowanceClick:;
+ (void)trackCardGroupAddClickClick:;
+ (void)trackCardTypeClose:;
+ (id)convertTypeToTrackerStringWithModel:;
@end
