@interface AWECommentEvaluationEventListenerManager : NSObject
+ (void)publishCommentPanelJSBEventWithParam:eventType:;
+ (void)observeEvent:;
@end
