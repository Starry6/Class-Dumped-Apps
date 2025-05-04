@interface AWEDiggShareFastReplyStrategy : NSObject
- (id)fastReplyEnterMethod;
- (id)fastReplyClickEvent;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyTrackerClickParamsWithClickType:emoji:;
- (id)fastReplyInputMode;
- (id)fastReplyEmojis;
- (id)fastReplyPlaceholder;
- (id)fastReplyAvatarURL;
- (BOOL)fastReplyNeedIMEmojiBtn;
- (BOOL)fastReplyCanUpdateViewBeforeAppear;
- (id)fastReplyTriggerRule;
- (void)fastReplyDidDismiss;
- (void)fastReplyDidShow;
- (void)fastReplyDidClickedWithType:;
- (void)fastReplyDidSend;
- (BOOL)fastReplyShouldRespondTrigger:;
- (BOOL)fastReplyShouldAvoidPriority;
- (id)init;
- (id)initWithContext:;
- (void).cxx_destruct;
+ (BOOL)fastReplyCanShowWithContext:;
+ (BOOL)fastReplyRefactorCanShowWithModel:context:;
@end
