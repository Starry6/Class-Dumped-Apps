@interface CNVCardPHOTOParser : NSObject
+ (void)parseBase64:parser:callback:;
+ (id)parseClipRectsWithParser:;
+ (id)clipRectInfoFromString:;
@end
