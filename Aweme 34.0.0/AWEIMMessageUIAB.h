@interface AWEIMMessageUIAB : NSObject
+ (BOOL)shouldShowNicknameWithMessage:;
+ (id)imBubbleGrandientImage;
+ (BOOL)bothEnableNewQuoteStyle;
+ (BOOL)enableShareContactListUIOpt;
+ (BOOL)enableShareContactListDoubleSend;
+ (BOOL)enableShareContactListFixedHigher;
+ (long long)enableStaticCoverCardStyle;
+ (BOOL)enableFansGroupLiveCardNewStyle;
+ (id)createBubbleGrandientImageWithStartColor:endColor:;
+ (BOOL)enableMessageLongVideoCardOpt;
+ (BOOL)enableLinkTextPreviewCard;
+ (BOOL)enablehareContactListAdjustBigFont;
+ (id)p_lightImage;
+ (id)p_darkImage;
+ (void)gradientColorForDark:startColor:endColor:;
+ (unsigned long long)shareContactListOptStrategy;
@end
