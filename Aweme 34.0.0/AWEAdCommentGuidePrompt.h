@interface AWEAdCommentGuidePrompt : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)showCommentGuidePrompt:showVC:;
+ (id)showPrompt:actionBlock:cancelBlock:;
+ (void)trackWithAweme:label:refer:;
+ (void)setupCommentPromptTime:showVC:;
+ (void)dismissBottomNotification:;
@end
