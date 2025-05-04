@interface AWEMVChannelCardLayout : NSObject
+ (long long)getDynamicSectionColumnWith:;
+ (long long)getDynamicSectionColumnWith:threshold:;
+ (double)videoHeightForPlayerCard;
+ (double)playerCardInfoViewHeightWithModel:;
+ (long long)numberOfPadColumnWithWidth:;
+ (id)sizeForPadCardType:awemeModel:width:;
+ (id)liveCardTitleWithAwemeModel:;
+ (double)playerCardSliderBottomOffset;
+ (double)playerCardSliderHeight;
+ (id)sizeForCardType:awemeModel:width:;
+ (id)sizeForPadAuthorRecommend;
+ (id)sizeforPadEmptyAuthorPageSizeWithWidth:hasHistory:;
+ (id)sizeForPadHeaderType:width:;
+ (double)smallCardInfoViewHeightWithModel:;
+ (double)playerCardSliderTopOffset;
+ (double)screenWidth;
+ (double)screenHeight;
@end
