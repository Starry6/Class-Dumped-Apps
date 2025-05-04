@interface AWESearchMerchandiseCellHelper : NSObject
+ (id)getJumpSourceBtmTokenWithBtm:bstGroupType:responder:createBTM:;
+ (BOOL)enableABTestPhotoSearchUIChange;
+ (id)makeNewCustomerStrongPriceAttributeText:;
+ (id)formattedPriceWithOriginalPrice:;
+ (double)getTitleLableHeight:fixWidth:titleLines:needUnifiedUIConfig:;
+ (id)makeStrongPriceAttributeText:spaceAfterSymbol:priceSuffixFont:;
+ (void)setBCMParamsWhenJump1:enterFrom:enterMethod:bstGroupType:responder:createBTM:;
+ (BOOL)enableCreateBTM;
+ (void)setBCMParamsWhenJump2:responder:createBTM:;
+ (BOOL)shouldShowAdTagLabel:;
+ (BOOL)shouldShowCouponList:;
+ (double)getCouponHeight:;
+ (id)formattedPriceWithOriginalPriceString:;
+ (id)getMerchandiseDescAttributedText:tagInfos:containerWidth:completion:;
+ (double)getTitleLableHeight:fixWidth:titleLines:;
+ (BOOL)shouldShowAuthor:;
+ (id)makeStrikePriceAttributeText:withPriceColor:;
+ (id)makeStrongPriceAttributeText:;
+ (id)drawVerticalLine:;
+ (id)bstGroupTypeWithModel:;
+ (id)createBTMWithInfo:clickedView:enterNewPage:;
+ (void)setBCMParamsWhenJump1:enterFrom:enterMethod:responder:createBTM:;
+ (void)setBCMParamsWhenJump2:responder:;
+ (void)setBCMParamsWhenJump1:enterFrom:enterMethod:responder:;
@end
