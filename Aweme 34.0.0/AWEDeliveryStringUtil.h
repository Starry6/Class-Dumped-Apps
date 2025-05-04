@interface AWEDeliveryStringUtil : NSObject
+ (double)awed_widthWithFont:height:str:;
+ (double)awed_heightWithFont:width:str:;
+ (id)awed_sizeWithFont:width:maxLine:str:;
+ (id)awed_plainTextForRange:attrStr:;
+ (id)awed_sizeWithFont:width:str:;
+ (double)awed_heightWithFont:width:maxLine:str:;
@end
