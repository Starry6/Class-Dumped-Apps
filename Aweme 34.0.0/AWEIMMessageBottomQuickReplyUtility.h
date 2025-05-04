@interface AWEIMMessageBottomQuickReplyUtility : NSObject
+ (id)sizeThatFit:;
+ (BOOL)canShowQuickReplyBtn:;
+ (long long)quickReplyExp;
+ (id)buttonInfoForMessage:;
+ (double)getRecommendListWidth;
+ (BOOL)hasButtonInfo:;
+ (void)sizeThatFitForModel:;
@end
