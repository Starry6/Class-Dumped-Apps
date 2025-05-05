@interface BDUGDeepLinkLogger : NSObject
+ (void)updateClipboardInvokeSession;
+ (void)updateLinkInvokeSession;
+ (void)xlogCheckClipboardEnd:;
+ (void)xlogClipboardIsNull;
+ (void)xlogDidIsEmpty;
+ (void)xlogForbidReadClipboard;
+ (void)xlogLinkInvokeEndWithScheme:type:;
+ (void)xlogParseLinkFailWithUrl:result:;
+ (void)xlogParseLinkSuccessWithScheme:result:;
+ (void)xlogRepeatScheme;
+ (void)xlogRequestSchemeErrorWithMessage:code:;
+ (void)xlogRequestSchemeNotInSchemeList;
+ (void)xlogRequestSchemeSuccess:;
+ (void)xlogStartCheckClipboard:;
+ (void)xlogStartParseLinkWithUri:isInit:;
+ (void)xlogStartReadClipboard;
@end
