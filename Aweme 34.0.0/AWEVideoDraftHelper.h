@interface AWEVideoDraftHelper : NSObject
+ (id)replaceAtSymbolInAttributedTitle:userRange:textColor:maximumWidth:font:shapeImage:numberOfLines:;
+ (id)getReplacedAttachmentWithAttributedString:range:textColor:maximumWidth:font:shapeImage:numberOfLines:;
+ (id)adjustTitle:titleExtraInfoData:textColor:duetMaximumWidth:commentMaximumWidth:font:numberOfLines:;
@end
