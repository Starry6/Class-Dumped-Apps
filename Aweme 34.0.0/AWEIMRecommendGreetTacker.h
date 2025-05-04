@interface AWEIMRecommendGreetTacker : NSObject
+ (id)trackerEnterMethod;
+ (void)trackHelloCardWithAction:userId:isVideoShow:enterFrom:isOnline:;
+ (void)trackEnterPersonalDetailWithUser:enterFrom:;
+ (void)trackUrgeClickWithUser:status:enterFrom:;
+ (void)trackUrgeToastWithUser:message:enterFrom:;
+ (id)chatPanelEnterFrom;
+ (void)trackEnterChatAndMarkEnterFromForSendMsgWithUser:enterFrom:;
@end
