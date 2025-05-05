@interface IESECLiveAnchorFlashSaleCreateUtility : NSObject
+ (void)makeToast:show:;
+ (id)buttonColorWithEnableStatus:;
+ (id)buttonFontColorWithEnableStatus:;
+ (double)buttonMargin;
+ (BOOL)isValidDeposit:showToast:acceptZero:;
+ (BOOL)isValidPrice:showToast:acceptZero:;
+ (BOOL)isValidPrice:showToast:acceptZero:acceptDecimals:priceTitle:;
+ (BOOL)isValidPriceLiterals:acceptDecimals:;
+ (BOOL)isValidStock:maxLimit:showToast:;
+ (id)itemLabelColor;
+ (id)itemSubTitleLabel;
+ (id)itemTextField;
+ (double)itemTopMargin;
+ (id)placeHolderColor;
+ (id)lineColor;
+ (double)buttonCornerRadius;
+ (id)actionButtonFont;
+ (double)itemHeight;
+ (id)itemLabel;
+ (double)imageCornerRadius;
@end
