@interface AWEECOMIMStringUtil : NSObject
+ (id)ecomim_douyinNumberABCRegularFontOfSize:;
+ (double)ecomim_widthWithFont:height:str:;
+ (double)ecomim_heightWithFont:width:str:;
+ (double)ecomim_heightWithFont:width:maxLine:str:;
+ (id)attributedStringWithStr:font:color:;
+ (id)attributedStringWithStr1:str2:;
+ (id)ecomim_douyinNumberABCMediumFontOfSize:;
+ (id)ecomim_sizeWithFont:width:maxLine:str:;
+ (void)ecomim_setTextBackedString:range:mutAttrStr:;
+ (id)ecomim_sizeWithAttributedStr:size:;
+ (id)ecomim_plainTextForRange:attrStr:;
+ (id)ecomim_sizeWithFont:width:str:;
+ (id)ecomim_douyinNumberABCFontOfSize:weight:;
+ (BOOL)ecomim_isDecimalDigitalsWithStr:;
@end
