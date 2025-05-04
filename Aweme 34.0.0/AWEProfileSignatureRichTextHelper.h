@interface AWEProfileSignatureRichTextHelper : NSObject
+ (id)configAtrributedContent:content:fontSize:adapteBigFont:textExtras:withOffset:isFromOthersProfilePage:;
+ (void)addUserHighlightInAttributedText:contentText:range:fontSize:adapteBigFont:userID:isFromOthersProfilePage:;
+ (id)contentFont:adapteBigFont:;
+ (id)configAtrributedContent:content:fontSize:textExtras:withOffset:isFromOthersProfilePage:;
@end
