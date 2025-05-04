@interface AWESearchCommentPanelHelper : NSObject
+ (void)trackCommentPanelEventWithLogExtra:attachTo:;
+ (void)showCommentPanelForHotspotWithComment:businessParams:logExtraParams:;
+ (void)showCommentPanelForTopicWithComment:businessParams:logExtraParams:;
@end
