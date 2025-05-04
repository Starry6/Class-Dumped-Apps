@interface AWEECOMIMRictTextHandler : NSObject
+ (id)rebuildRichText:ext:defaultLinkColor:fontSize:routeActionBlock:;
+ (void)dealWithAttributedString:range:ext:defaultLinkColor:fontSize:routeActionBlock:;
@end
