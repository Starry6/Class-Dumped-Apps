@interface AWEIMContentTopDescUtils : NSObject
+ (BOOL)shouldDisplayContentTopDesc:;
+ (id)titleForMessage:;
+ (BOOL)isLightCameraReply:;
+ (BOOL)isMentionFeed:;
+ (BOOL)isHistoryToday:;
+ (BOOL)isGiphyMessageHaveTopDesc:;
+ (BOOL)isGroupExchangeMessage:;
+ (id)getNickNameWithMessage:;
+ (BOOL)enableMatchWithGiphyMessage:;
+ (id)schemaByReplacingPlaceHoldersInTitle:nickName:;
+ (BOOL)isEnableReplaceTitleNickWithUid;
@end
