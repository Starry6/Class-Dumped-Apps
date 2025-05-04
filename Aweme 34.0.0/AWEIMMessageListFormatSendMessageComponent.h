@interface AWEIMMessageListFormatSendMessageComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessage currentTopicCardMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)helpUserSendMessageInFormat:syncExt:localExt:aiExt:;
- (id)messageSupportMenuItems:;
- (void)componentDidMounted:;
- (void)deleteCurrentTopicCardMessage;
- (void)createAndSendTopicCardMessageWithCardData:querys:style:;
- (BOOL)isShowingTopicCardAsLastMsg;
- (void)hostVC_afterFirstRender;
- (id)aiExtParamsAddTosendMessage;
- (double)vcParentViewWidth;
- (void)calculateSizeAndMaxQueryCountForMessage:querys:style:;
- (void)setCurrentTopicCardMessage:;
- (id)currentTopicCardMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
