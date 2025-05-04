@interface AWEIMWidgetDelayModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) Q conversationType;
@property (nonatomic) Q widgetType;
@property (nonatomic) NSDictionary extension;
@property (nonatomic) NSString widgetShowType;
@property (nonatomic) AWEIMWidgetTrackContextModel trackContext;
- (id)trackContext;
- (void)setTrackContext:;
- (unsigned long long)conversationType;
- (void)setConversationType:;
- (id)widgetShowType;
- (void)setWidgetShowType:;
- (void)setWidgetType:;
- (unsigned long long)widgetType;
- (void)setExtension:;
- (id)conversationID;
- (id)extension;
- (void).cxx_destruct;
- (void)setConversationID:;
@end
