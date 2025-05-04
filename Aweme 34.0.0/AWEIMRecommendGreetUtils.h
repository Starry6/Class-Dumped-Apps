@interface AWEIMRecommendGreetUtils : NSObject
+ (id)backgroundImageUrl;
+ (BOOL)isLightInteractionEnable;
+ (void)deleteRecommendGreetCard:;
+ (id)friendCardTextConfig;
+ (id)iconUrl_recommendGreet;
+ (id)configName_recommendGreet;
+ (id)buttonTitle_recommendGreet;
+ (void)transferToUserProfileWithUser:;
+ (void)skipRecommendGreetCard:;
+ (void)greetUser:configName:enterFrom:completion:;
+ (void)transferToFloatMessageListWithUser:enterFrom:;
+ (id)buttonText_defaultTextWithUser:;
+ (void)p_sendLightInteractionMessageToConversation:enterMethod:name:enterFrom:;
+ (id)descText_recommendGreetWithUser:;
+ (void)familiarFeedSlideToNext;
@end
