@interface AWEIMEmoticonServiceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)staticStickerPathForInteractiveEmoticon:;
- (id)animateStickerPathForInteractiveEmoticon:;
- (id)singleSepcialEmojiPathForInteractiveEmoticon:;
- (void)lazyDownloadSpecialResourceName:complete:;
- (id)interactiveEmotionThemeModel;
- (id)decodeWithText:template:font:linkTapAction:type:;
- (id)decodeWithText:textColor:template:font:linkTapAction:type:;
- (id)decodeWithText:textColor:highlightColor:needUnderlineBelowLink:linkArray:font:isCompany:linkTapAction:type:;
- (double)textMessageLineHeight;
+ (id)trackKeyForStyle:;
+ (id)trackEmojiTypeForStickerType:;
+ (long long)genderForEmoticonNetworkWithGenderType:;
+ (id)trackTabEnterMethodForStyle:;
+ (id)trackEmojiFromForStyle:emoticonModel:;
+ (id)companyHighlightColor;
+ (id)normalHighlightColor;
+ (id)normalHighlightClickColor;
+ (long long)trackAweTypeForStickerType:;
+ (BOOL)canShowGiphyNameWithAweType:;
+ (BOOL)canShowGiphyNameWithStickerType:;
+ (id)sharedInstance;
@end
