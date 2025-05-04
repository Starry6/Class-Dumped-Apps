@interface AWEProfileUtilities : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)aStrWith:withSuffix:preferFontSize:isLoaded:textColor:;
+ (id)adaptedDUXShowStringWithFromNumber:;
+ (id)showStringFromNumber:;
+ (id)p_dateFormat;
+ (id)accessibilityLabelForCountString:;
+ (id)getUserAge:isOnlyNumber:;
+ (id)accessibilityLabelForAvatarWithNickname:;
+ (id)colorWithHexARGBString:;
+ (id)profileButtonColor;
+ (id)profileButtonColorWithUserModel:;
+ (BOOL)shouldProfileButtonsApplySolidStyleWithUserModel:;
+ (id)trimmedUserNameWithContext:;
+ (id)aStrWithIntro:andSignatureExtra:withOffset:isFromOthersProfilePage:;
+ (double)signatureLineHeight;
+ (id)isFormatedString:;
+ (id)decimalDigitFromString:;
+ (void)preRequestCoverImageWithArrayJson:;
+ (void)awemeListSplitParse:splitCount:modelClass:frontParseComplete:backParseComplete:;
+ (id)getAwemeListWithArrayJson:;
@end
