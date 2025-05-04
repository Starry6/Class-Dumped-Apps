@interface AWEFeedDetailBarActionTool : NSObject
+ (BOOL)enableShowContentWithEnterFrom:referString:;
+ (BOOL)hideSendButtonWhenHasContentWithEnterFrom:referString:;
+ (BOOL)isSchoolStoryDairyPageWithEnterFrom:referString:;
+ (BOOL)isRelatedVideoPageWithEnterFrom:referString:;
+ (BOOL)isShowForwardButtonPageWithEnterFrom:referString:;
@end
