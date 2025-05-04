@interface AWEConsumerDuetBlockList : NSObject
+ (BOOL)isNotAuthor:;
+ (BOOL)authorIsPrivateAccount:;
+ (id)duetBlockListRemote;
+ (id)duetBlockList;
+ (id)generateDuetBlockList;
+ (id)generateDuetBlockListRemote;
+ (id)duetBlockListHiddenCommon;
+ (id)duetBlockListHiddenLocal;
+ (id)duetBlockListGrayedCommon;
+ (id)duetBlockListGrayedLocal;
+ (id)duetBlockListHiddenRemote;
+ (id)duetBlockListGrayedRemote;
+ (BOOL)isAllowedDuetAwemeType:;
+ (BOOL)checkCanDuetAwemeForVideoLength:;
+ (id)duetActionWithContext:;
@end
